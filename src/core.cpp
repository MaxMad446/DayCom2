// Auto-generated module | 2026-05-11T20:04:16.748712
#include <iostream>
#include <vector>

int compute_828() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
