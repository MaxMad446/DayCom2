// Auto-generated module | 2026-05-11T20:59:17.773682
#include <iostream>
#include <vector>

int compute_311() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
