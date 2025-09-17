#include "fallback_font.h"

#pragma once

#define BYTE constexpr char

BYTE XX___XX = 0b01100011; // NOLINT(*-reserved-identifier)
BYTE _XXXXXX = 0b00111111; // NOLINT(*-reserved-identifier)
BYTE XXXXXXX = 0b01111111; // NOLINT(*-reserved-identifier)
BYTE XXXXXX_ = 0b01111110; // NOLINT(*-reserved-identifier)
BYTE XXXXX__ = 0b01111100; // NOLINT(*-reserved-identifier)
BYTE _XXX___ = 0b00111000; // NOLINT(*-reserved-identifier)
BYTE __X_X__ = 0b00010100; // NOLINT(*-reserved-identifier)
BYTE _XX_X__ = 0b00110100; // NOLINT(*-reserved-identifier)
BYTE _XX_XX_ = 0b00110110; // NOLINT(*-reserved-identifier)
BYTE __XX_XX = 0b00011011; // NOLINT(*-reserved-identifier)
BYTE _XX__XX = 0b00110011; // NOLINT(*-reserved-identifier)
BYTE __XX__X = 0b00011001; // NOLINT(*-reserved-identifier)
BYTE XX_XX__ = 0b01101100; // NOLINT(*-reserved-identifier)
BYTE __XXX__ = 0b00011100; // NOLINT(*-reserved-identifier)
BYTE _XXXXX_ = 0b00111110; // NOLINT(*-reserved-identifier)
BYTE XX_____ = 0b01100000; // NOLINT(*-reserved-identifier)
BYTE _XX____ = 0b00110000; // NOLINT(*-reserved-identifier)
BYTE __XX___ = 0b00011000; // NOLINT(*-reserved-identifier)
BYTE ___XX__ = 0b00001100; // NOLINT(*-reserved-identifier)
BYTE ____XX_ = 0b00000110; // NOLINT(*-reserved-identifier)
BYTE _____XX = 0b00000011; // NOLINT(*-reserved-identifier)
BYTE XX__XX_ = 0b01100110; // NOLINT(*-reserved-identifier)
BYTE XXX_XX_ = 0b01110110; // NOLINT(*-reserved-identifier)
BYTE XX__XXX = 0b01100111; // NOLINT(*-reserved-identifier)
BYTE XX_XXXX = 0b01101111; // NOLINT(*-reserved-identifier)
BYTE X_XXXX_ = 0b01011110; // NOLINT(*-reserved-identifier)
BYTE X_XXX__ = 0b01011100; // NOLINT(*-reserved-identifier)
BYTE XX_XXX_ = 0b01101110; // NOLINT(*-reserved-identifier)
BYTE XXX_XXX = 0b01110111; // NOLINT(*-reserved-identifier)
BYTE XXX__XX = 0b01110011; // NOLINT(*-reserved-identifier)
BYTE XXXX_XX = 0b01111011; // NOLINT(*-reserved-identifier)
BYTE _XXX_XX = 0b00111011; // NOLINT(*-reserved-identifier)
BYTE _XXXX_X = 0b00111101; // NOLINT(*-reserved-identifier)
BYTE XX_X_XX = 0b01101011; // NOLINT(*-reserved-identifier)
BYTE ___X___ = 0b00001000; // NOLINT(*-reserved-identifier)
BYTE __X____ = 0b00010000; // NOLINT(*-reserved-identifier)
BYTE __XXXX_ = 0b00011110; // NOLINT(*-reserved-identifier)
BYTE ____XXX = 0b00000111; // NOLINT(*-reserved-identifier)
BYTE _______ = 0b00000000; // NOLINT(*-reserved-identifier)

// Font data (hard coded basic 8x8)
char ch_A[8] = {
    __XXX__,
    _XX_XX_,
    XX___XX,
    XX___XX,
    XXXXXXX,
    XX___XX,
    XX___XX,
    _______
};

char ch_a[8] = {
    _______,
    _______,
    _XXXXX_,
    _____XX,
    _XXXXXX,
    XX___XX,
    _XXXX_X,
    _______
};

char ch_B[8] = {
    XXXXXX_,
    XX___XX,
    XX___XX,
    XXXXXX_,
    XX___XX,
    XX___XX,
    XXXXXX_,
    _______
};

char ch_b[8] = {
    XX_____,
    XX_____,
    XXXXXX_,
    XX___XX,
    XX___XX,
    XXX__XX,
    XX_XXX_,
    _______
};

char ch_C[8] = {
    _XXXXX_,
    XX___XX,
    XX_____,
    XX_____,
    XX_____,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_c[8] = {
    _______,
    _______,
    _XXXXX_,
    XX___XX,
    XX_____,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_D[8] = {
    XXXXXX_,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XXXXXX_,
    _______
};

char ch_d[8] = {
    _____XX,
    _____XX,
    _XXXXXX,
    XX___XX,
    XX___XX,
    XX__XXX,
    _XXXX_X,
    _______
};

char ch_E[8] = {
    XXXXXXX,
    XX_____,
    XX_____,
    XXXXXX_,
    XX_____,
    XX_____,
    XXXXXXX,
    _______
};

char ch_e[8] = {
    _______,
    _______,
    _XXXXX_,
    XX___XX,
    XXXXXXX,
    XX_____,
    _XXXXXX,
    _______
};

char ch_F[8] = {
    XXXXXXX,
    XX_____,
    XX_____,
    XXXXXX_,
    XX_____,
    XX_____,
    XX_____,
    _______
};

char ch_f[8] = {
    ____XXX,
    ___XX__,
    _XXXXXX,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    _______
};

char ch_G[8] = {
    _XXXXX_,
    XX___XX,
    XX_____,
    XX__XXX,
    XX___XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_g[8] = {
    _______,
    _______,
    _XXXX_X,
    XX___XX,
    XX___XX,
    _XXXXXX,
    _____XX,
    _XXXXX_,
};

char ch_H[8] = {
    XX___XX,
    XX___XX,
    XX___XX,
    XXXXXXX,
    XX___XX,
    XX___XX,
    XX___XX,
    _______
};

char ch_h[8] = {
    XX_____,
    XX_____,
    XXXXXX_,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    _______
};

char ch_I[8] = {
    __XXXX_,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    __XXXX_,
    _______
};

char ch_i[8] = {
    ___XX__,
    _______,
    __XXX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    _______
};

char ch_J[8] = {
    _____XX,
    _____XX,
    _____XX,
    _____XX,
    _____XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_j[8] = {
    ___XX__,
    _______,
    __XXX__,
    ___XX__,
    ___XX__,
    ___XX__,
    XX_XX__,
    _XXX___,
};

char ch_K[8] = {
    XX___XX,
    XX___XX,
    XX__XX_,
    XXXXX__,
    XX__XX_,
    XX___XX,
    XX___XX,
    _______
};

char ch_k[8] = {
    XX_____,
    XX_____,
    XX___XX,
    XX__XX_,
    XXXXX__,
    XX__XX_,
    XX___XX,
    _______
};

char ch_L[8] = {
    XX_____,
    XX_____,
    XX_____,
    XX_____,
    XX_____,
    XX_____,
    XXXXXXX,
    _______
};

char ch_l[8] = {
    __XXX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ____XXX,
    _______
};

char ch_M[8] = {
    XX___XX,
    XXX_XXX,
    XXXXXXX,
    XX_X_XX,
    XX___XX,
    XX___XX,
    XX___XX,
    _______
};

char ch_m[8] = {
    _______,
    _______,
    _XX_XX_,
    XX_X_XX,
    XX_X_XX,
    XX_X_XX,
    XX_X_XX,
    _______
};

char ch_N[8] = {
    XX___XX,
    XXX__XX,
    XXXX_XX,
    XXXXXXX,
    XX_XXXX,
    XX__XXX,
    XX___XX,
    _______
};

char ch_n[8] = {
    _______,
    _______,
    XX_XX__,
    XXX_XX_,
    XX___XX,
    XX___XX,
    XX___XX,
    _______
};

char ch_O[8] = {
    _XXXXX_,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_o[8] = {
    _______,
    _______,
    _XXXXX_,
    XX___XX,
    XX___XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_P[8] = {
    XXXXXX_,
    XX___XX,
    XX___XX,
    XX___XX,
    XXXXXX_,
    XX_____,
    XX_____,
    _______
};

char ch_p[8] = {
    _______,
    _______,
    X_XXXX_,
    XX___XX,
    XX___XX,
    XXXXXX_,
    XX_____,
    XX_____,
};

char ch_Q[8] = {
    _XXXXX_,
    XX___XX,
    XX___XX,
    XX___XX,
    XX_XXX_,
    XX__XXX,
    _XXX_XX,
    _______
};

char ch_q[8] = {
    _______,
    _______,
    _XXXX_X,
    XX___XX,
    XX___XX,
    _XXXXXX,
    _____XX,
    _____XX,
};

char ch_R[8] = {
    XXXXXX_,
    XX___XX,
    XX___XX,
    XX__XX_,
    XXXXX__,
    XX_XXX_,
    XX__XXX,
    _______
};

char ch_r[8] = {
    _______,
    _______,
    X_XXX__,
    XX__XX_,
    XX_____,
    XX_____,
    XX_____,
    _______
};

char ch_S[8] = {
    _XXXXX_,
    XX___XX,
    XX_____,
    _XXXXX_,
    _____XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_s[8] = {
    _______,
    _______,
    _XXXXX_,
    XX_____,
    _XXXXX_,
    _____XX,
    _XXXXX_,
    _______
};

char ch_T[8] = {
    _XXXXXX,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    _______
};

char ch_t[8] = {
    _______,
    XX_____,
    XXXXX__,
    XX_____,
    XX_____,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_U[8] = {
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_u[8] = {
    _______,
    _______,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    _XXXX_X,
    _______
};

char ch_V[8] = {
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    _XX_XX_,
    __XXX__,
    ___X___,
    _______
};

char ch_v[8] = {
    _______,
    _______,
    XX___XX,
    XX___XX,
    _XX_XX_,
    __XXX__,
    ___X___,
    _______
};

char ch_W[8] = {
    XX___XX,
    XX___XX,
    XX___XX,
    XX_X_XX,
    XXXXXXX,
    XXX_XXX,
    XX___XX,
    _______
};

char ch_w[8] = {
    _______,
    _______,
    XX_X_XX,
    XX_X_XX,
    XX_X_XX,
    XX_X_XX,
    _XX_XX_,
    _______
};

char ch_X[8] = {
    XX___XX,
    XX___XX,
    _XX_XX_,
    __XXX__,
    _XX_XX_,
    XX___XX,
    XX___XX,
    _______
};

char ch_x[8] = {
    _______,
    _______,
    XX___XX,
    _XX_XX_,
    __XXX__,
    _XX_XX_,
    XX___XX,
    _______
};

char ch_Y[8] = {
    XX___XX,
    XX___XX,
    _XX_XX_,
    __XXX__,
    ___XX__,
    ___XX__,
    ___XX__,
    _______
};

char ch_y[8] = {
    _______,
    _______,
    XX___XX,
    XX___XX,
    XX___XX,
    _XXXXXX,
    _____XX,
    _XXXXX_,
};

char ch_Z[8] = {
    XXXXXXX,
    _____XX,
    ____XX_,
    __XXX__,
    _XX____,
    XX_____,
    XXXXXXX,
    _______
};

char ch_z[8] = {
    _______,
    _______,
    XXXXXXX,
    ____XX_,
    __XXX__,
    _XX____,
    XXXXXXX,
    _______
};

char Bang[8] = {
    ___XX__,
    __XXXX_,
    __XXXX_,
    ___XX__,
    _______,
    ___XX__,
    ___XX__,
    _______
};

char ch_0[8] = {
    _XXXXX_,
    XX___XX,
    XX__XXX,
    XX_X_XX,
    XXX__XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_1[8] = {
    ___XX__,
    XXXXX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    _XXXXXX,
    _______
};

char ch_2[8] = {
    _XXXXX_,
    XX___XX,
    ____XX_,
    ___XX__,
    __XX___,
    _XX____,
    XXXXXXX,
    _______
};

char ch_3[8] = {
    _XXXXX_,
    XX___XX,
    _____XX,
    __XXXX_,
    _____XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_4[8] = {
    XX__XX_,
    XX__XX_,
    XX__XX_,
    XX__XX_,
    XXXXXXX,
    ____XX_,
    ____XX_,
    _______
};

char ch_5[8] = {
    XXXXXXX,
    XX_____,
    XXXXXX_,
    XX___XX,
    _____XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_6[8] = {
    _XXXXX_,
    XX___XX,
    XX_____,
    XXXXXX_,
    XX___XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_7[8] = {
    XXXXXXX,
    XX___XX,
    ____XX_,
    ___XX__,
    __XX___,
    __XX___,
    __XX___,
    _______
};

char ch_8[8] = {
    _XXXXX_,
    XX___XX,
    XX___XX,
    _XXXXX_,
    XX___XX,
    XX___XX,
    _XXXXX_,
    _______
};

char ch_9[8] = {
    _XXXXX_,
    XX___XX,
    XX___XX,
    _XXXXXX,
    _____XX,
    XX___XX,
    _XXXXX_,
    _______
};

char cmma[8] = {
    _______,
    _______,
    _______,
    _______,
    __XX___,
    __XX___,
    ___X___,
    __X____,
};

char stop[8] = {
    _______,
    _______,
    _______,
    _______,
    _______,
    __XX___,
    __XX___,
    _______
};

char dqot[8] = {
    _XX_XX_,
    _XX_XX_,
    __X_X__,
    _______,
    _______,
    _______,
    _______,
    _______
};

char quot[8] = {
    __XX___,
    __XX___,
    ___X___,
    __X____,
    _______,
    _______,
    _______,
    _______
};

char hash[8] = {
    _XX_XX_,
    XXXXXXX,
    _XX_XX_,
    _XX_XX_,
    _XX_XX_,
    XXXXXXX,
    _XX_XX_,
    _______
};

char dola[8] = {
    ___XX__,
    _XXXXX_,
    XX_____,
    _XXXXX_,
    _____XX,
    _XXXXX_,
    ___XX__,
    _______
};

char prcn[8] = {
    XX___XX,
    XX___XX,
    ____XX_,
    __XXX__,
    _XX____,
    XX___XX,
    XX___XX,
    _______
};

char amps[8] = {
    __XX___,
    _XX_X__,
    _XX_X__,
    __XX__X,
    XX_XXX_,
    XX__XX_,
    _XXX_XX,
    _______
};

char Lpar[8] = {
    __XX___,
    _XX____,
    XX_____,
    XX_____,
    XX_____,
    _XX____,
    __XX___,
    _______
};

char Rpar[8] = {
    __XX___,
    ___XX__,
    ____XX_,
    ____XX_,
    ____XX_,
    ___XX__,
    __XX___,
    _______
};


char Lbrk[8] = {
    XXXXX__,
    XX_____,
    XX_____,
    XX_____,
    XX_____,
    XX_____,
    XXXXX__,
    _______
};

char Rbrk[8] = {
    XXXXX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    ___XX__,
    XXXXX__,
    _______
};


char Lbce[8] = {
    ____XX_,
    ___XX__,
    ___XX__,
    _XXX___,
    ___XX__,
    ___XX__,
    ____XX_,
    _______
};

char Rbce[8] = {
    __XX___,
    ___XX__,
    ___XX__,
    ____XXX,
    ___XX__,
    ___XX__,
    __XX___,
    _______
};

char astr[8] = {
    ___X___,
    XX_X_XX,
    __XXX__,
    ___X___,
    __XXX__,
    XX_X_XX,
    ___X___,
    _______
};

char plus[8] = {
    _______,
    _______,
    ___X___,
    ___X___,
    _XXXXX_,
    ___X___,
    ___X___,
    _______
};

char negv[8] = {_XXXXX_,};

char fsla[8] = {
    _______,
    _____XX,
    ____XX_,
    ___XX__,
    __XX___,
    _XX____,
    XX_____,
    _______
};

char bsla[8] = {
    _______,
    XX_____,
    _XX____,
    __XX___,
    ___XX__,
    ____XX_,
    _____XX,
    _______
};

char coln[8] = {
    _______,
    __XX___,
    __XX___,
    _______,
    _______,
    __XX___,
    __XX___,
    _______
};

char scln[8] = {
    _______,
    __XX___,
    __XX___,
    _______,
    __XX___,
    __XX___,
    ___X___,
    __X____,
};

char chLT[8] = {
    _______,
    _______,
    ____XX_,
    __XX___,
    XX_____,
    __XX___,
    ____XX_,
    _______
};

char chGT[8] = {
    _______,
    _______,
    XX_____,
    __XX___,
    ____XX_,
    __XX___,
    XX_____,
    _______
};

char equl[8] = {
    _______,
    _______,
    XXXXXXX,
    _______,
    XXXXXXX,
    _______,
    _______,
    _______
};


char ques[8] = {
    _XXXXX_,
    XX___XX,
    XX__XX_,
    ___XX__,
    __XX___,
    _______,
    __XX___,
    _______
};

char cmat[8] = {
    _XXXXX_,
    XX___XX,
    XX__XXX,
    XX_X_XX,
    XX__XXX,
    XX_____,
    _XXXXX_,
    _______
};


char chev[8] = {
    ___X___,
    __XXX__,
    _XX_XX_,
    XX___XX,
    _______,
    _______,
    _______,
    _______
};

char btik[8] = {
    __XX___,
    ___XX__,
    ____XX_,
    _______,
    _______,
    _______,
    _______,
    _______
};

char uscr[8] = {
    _______,
    _______,
    _______,
    _______,
    _______,
    _______,
    _______,
    XXXXXXX
};

char tild[8] = {
    _______,
    _XX__XX,
    XX_X_XX,
    XX__XX_,
    _______,
    _______,
    _______,
    _______
};

char vert[8] = {
    ___X___,
    ___X___,
    ___X___,
    ___X___,
    ___X___,
    ___X___,
    ___X___,
    _______
};

// Blank char, for any white-space
char spac[8] = {
    _______,
    _______,
    _______,
    _______,
    _______,
    _______,
    _______,
    _______,
};

// symbol for newline, incase caller doesn't handle it
char RETN[8] = {
    _____XX,
    _____XX,
    _____XX,
    __XX_XX,
    _XX__XX,
    XXXXXXX,
    _XX__XX,
    __XX___,
};

// Invalid char, control char, or not yet mapped
char INVL[8] = {
    XXXXXXX,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XX___XX,
    XXXXXXX,
};

const char* const fallbackCharMap[128]{
    //      0     1     2     3     4     5     6     7     8     9
    /*  0*/ spac, INVL, INVL, INVL, INVL, INVL, INVL, INVL, INVL, spac, // nul, ctrl, tab, newline...
    /* 10*/ RETN, spac, spac, RETN, INVL, INVL, INVL, INVL, INVL, INVL,
    /* 20*/ INVL, INVL, INVL, INVL, INVL, INVL, INVL, INVL, INVL, INVL,
    /* 30*/ INVL, INVL, spac, Bang, dqot, hash, dola, prcn, amps, quot, // PUNCT & NUM
    /* 40*/ Lpar, Rpar, astr, plus, cmma, negv, stop, fsla, ch_0, ch_1,
    /* 50*/ ch_2, ch_3, ch_4, ch_5, ch_6, ch_7, ch_8, ch_9, coln, scln,
    /* 60*/ chLT, equl, chGT, ques, cmat, ch_A, ch_B, ch_C, ch_D, ch_E, // UPPER CASE
    /* 70*/ ch_F, ch_G, ch_H, ch_I, ch_J, ch_K, ch_L, ch_M, ch_N, ch_O,
    /* 80*/ ch_P, ch_Q, ch_R, ch_S, ch_T, ch_U, ch_V, ch_W, ch_X, ch_Y,
    /* 90*/ ch_Z, Lbrk, bsla, Rbrk, chev, uscr, btik, ch_a, ch_b, ch_c, // LOWER CASE
    /*100*/ ch_d, ch_e, ch_f, ch_g, ch_h, ch_i, ch_j, ch_k, ch_l, ch_m,
    /*110*/ ch_n, ch_o, ch_p, ch_q, ch_r, ch_s, ch_t, ch_u, ch_v, ch_w,
    /*120*/ ch_x, ch_y, ch_z, Lbce, vert, Rbce, tild, INVL
};


const char* fallbackCharToGlyph(const char c) {
    if (c <= 0) return nullptr;
    return fallbackCharMap[c & 0x7F];
}
