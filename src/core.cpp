// Auto-generated module | 2026-05-11T20:06:30.096090
#include <iostream>
#include <vector>

int compute_384() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
