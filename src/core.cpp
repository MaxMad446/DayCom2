// Auto-generated module | 2026-05-11T20:05:37.310885
#include <iostream>
#include <vector>

int compute_950() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}
