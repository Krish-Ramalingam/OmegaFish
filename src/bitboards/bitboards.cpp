#include "bitboards.h"

std::uint64_t knightMoves[64];

void initializeKnightMoves() {
    for (int i = 0; i < 64; i++) {
        knightMoves[i] = 0;
    }
}
