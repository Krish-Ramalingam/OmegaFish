#include "bitboards.h"

std::uint64_t knightMoves[64];

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

