// Auto-generated module | 2026-05-11T20:33:45.435668
#include <iostream>
#include <vector>

int compute_723() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
