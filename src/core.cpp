// Auto-generated module | 2026-05-11T20:25:39.988059
#include <iostream>
#include <vector>

int compute_759() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
