#include "bitboards/bitboards.h"

std::uint64_t knightMoves[64];
std::uint64_t bishopMoves[64];
std::uint64_t rookMoves[64];
std::uint64_t queenMoves[64];

void initializeKnightMoves() {
    for (int i = 0; i < 64; i++) {
        knightMoves[i] = 0;
        if (i % 8 > 1) {
            if (i / 8 > 0) {
                knightMoves[i] |= 1ULL << (i - 10);
            }
            if (i / 8 < 7) {
                knightMoves[i] |= 1ULL << (i + 6);
            }
        }
        if (i % 8 < 6) {
            if (i / 8 > 0) {
                knightMoves[i] |= 1ULL << (i - 6);
            }
            if (i / 8 < 7) {
                knightMoves[i] |= 1ULL << (i + 10);
            }

        }
        if (i % 8 > 0) {
            if (i / 8 > 1) {
                knightMoves[i] |= 1ULL << (i - 17);
            }
            if (i / 8 < 6) {
                knightMoves[i] |= 1ULL << (i + 15);
            }
        }
        if (i % 8 < 7) {
            if (i / 8 > 1) {
                knightMoves[i] |= 1ULL << (i - 15);
            }
            if (i / 8 < 6) {
                knightMoves[i] |= 1ULL << (i + 17);
            }
        }
    }
}

void initializeBishopMoves() {
    for (int i = 0; i < 64; i++) {
        bishopMoves[i] = 0;
        int pos_x = i % 8;
        int pos_y = i / 8;
        for (int j = 1; j < 8; j++) {
            if (pos_x + j < 8 && pos_y + j < 8) {
                bishopMoves[i] |= 1ULL << (i + j * 9);
            }
            if (pos_x - j >= 0 && pos_y + j < 8) {
                bishopMoves[i] |= 1ULL << (i + j * 7);
            }
            if (pos_x + j < 8 && pos_y - j >= 0) {
                bishopMoves[i] |= 1ULL << (i - j * 7);
            }
            if (pos_x - j >= 0 && pos_y - j >= 0) {
                bishopMoves[i] |= 1ULL << (i - j * 9);
            }
        }
}}

void initializeRookMoves() {
    for (int i = 0; i < 64; i++) {
        rookMoves[i] = 0;
        int pos_x = i % 8;
        int pos_y = i / 8;
        for (int j = 1; j < 8; j++) {
            if (pos_x + j < 8) {
                rookMoves[i] |= 1ULL << (i + j);
            }
            if (pos_x - j >= 0) {
                rookMoves[i] |= 1ULL << (i - j);
            }
            if (pos_y + j < 8) {
                rookMoves[i] |= 1ULL << (i + j * 8);
            }
            if (pos_y - j >= 0) {
                rookMoves[i] |= 1ULL << (i - j * 8);
            }
        }
    }
}

void initializeQueenMoves() {
    for (int i = 0; i < 64; i++) {
        queenMoves[i] = bishopMoves[i] | rookMoves[i];
    }
}

