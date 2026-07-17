// #include "evaluation/evaluation.h"
#include <iostream>
#include <cstdint>


int evaluateBoard(const std::uint64_t whiteKings, const std::uint64_t whiteQueens, const std::uint64_t whiteRooks, const std::uint64_t whiteBishops, const std::uint64_t whiteKnights, const std::uint64_t whitePawns, const std::uint64_t blackKings, const std::uint64_t blackQueens, const std::uint64_t blackRooks, const std::uint64_t blackBishops, const std::uint64_t blackKnights, const std::uint64_t blackPawns) {
    int pieceEvaluation = std::__popcount(whiteKings) + std::__popcount(whiteQueens) + std::__popcount(whiteRooks) + std::__popcount(whiteBishops) + std::__popcount(whiteKnights) + std::__popcount(whitePawns)
                        - (std::__popcount(blackKings) + std::__popcount(blackQueens) + std::__popcount(blackRooks) + std::__popcount(blackBishops) + std::__popcount(blackKnights) + std::__popcount(blackPawns));
    return pieceEvaluation;
}

int main() {
    std::uint64_t whiteKings = 0x000000000000000FF;
    std::uint64_t blackKings = 0x000000000000FF00;
    int evaluation = evaluateBoard(whiteKings, 0, 0, 0, 0, 0, blackKings, 0, 0, 0, 0, 0);
    std::cout << evaluation << std::endl;
    return 0;
}