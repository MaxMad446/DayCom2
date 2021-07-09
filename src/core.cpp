// Auto-generated module | 2026-05-11T20:22:04.603992
#include <iostream>
#include <vector>

int compute_115() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
