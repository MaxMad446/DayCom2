// Auto-generated module | 2026-05-11T20:24:57.827921
#include <iostream>
#include <vector>

int compute_789() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
