// Auto-generated module | 2026-05-14T18:17:57.539498
#include <iostream>
#include <vector>

int compute_456() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
