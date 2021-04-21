// Auto-generated module | 2026-05-11T20:11:38.130678
#include <iostream>
#include <vector>

int compute_363() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
