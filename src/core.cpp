// Auto-generated module | 2026-05-11T22:34:34.726590
#include <iostream>
#include <vector>

int compute_801() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
