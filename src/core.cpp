// Auto-generated module | 2026-05-12T21:21:58.503694
#include <iostream>
#include <vector>

int compute_535() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
