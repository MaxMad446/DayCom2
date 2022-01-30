// Auto-generated module | 2026-05-11T20:49:00.144085
#include <iostream>
#include <vector>

int compute_363() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
