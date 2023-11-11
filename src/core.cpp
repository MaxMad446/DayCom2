// Auto-generated module | 2026-05-13T20:59:44.359889
#include <iostream>
#include <vector>

int compute_738() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
