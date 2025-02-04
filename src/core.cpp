// Auto-generated module | 2026-05-12T21:11:01.958556
#include <iostream>
#include <vector>

int compute_535() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
