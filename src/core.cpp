// Auto-generated module | 2026-05-11T20:58:48.377691
#include <iostream>
#include <vector>

int compute_311() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
