#pragma once

/**
 * Map of ASCII chars 0..127 to glyphs as 8x8 bitmaps (8 bytes each glyph).
 * Left and bottom of the glyphs are whitespace.
 * */
extern const char* const fallbackCharMap[128];

/**
 * Map of ASCII char to a glyph as 8x8 bitmaps (8 bytes, 1 byte per line).
 * Left and bottom of the glyphs are whitespace.
 * Returns NULL at end of string.
 * */
const char* fallbackCharToGlyph(char c);