// Auto-generated module | 2026-05-14T18:09:20.835594
#include <iostream>
#include <vector>

int compute_535() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
