#include <iostream>
#include "fallback_font.h"

#ifdef WIN32
const auto filled = "\xB2";
const auto empty  = "\xB0";
#else
const auto filled  = "░";
const auto empty = "▓";
#endif

void writeLine(const char* const message) {
    for (int row = 0; row < 8; ++row) {
        auto curs = message;
        while (*curs != 0) {
            auto g = fallbackCharToGlyph(*curs)[row];
            for (int col = 0; col < 8; ++col) {
                printf("%s", ((g & 0x80) != 0) ? filled : empty);
                g <<= 1;
            }
            curs++;
        }
        printf("%s\r\n", empty);
    }
}

int main() {
    writeLine("Hello, world!");
    writeLine("0123456789?");
    writeLine("QqPpGgYy");
    writeLine("()[]{}<>%$^=/\\|&@");
}
