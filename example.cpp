#include <iostream>
#include <cstdint>

int main() {
    std::uint64_t whiteKings = 0x000000000000000FF; // Example bitboard for white kings
    std::cout << std::__popcount(whiteKings) << std::endl; // Output the value of whiteKings
    return 0;
}