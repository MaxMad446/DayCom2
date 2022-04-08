// Auto-generated module | 2026-05-11T20:57:49.014122
#include <iostream>
#include <vector>

int compute_342() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
