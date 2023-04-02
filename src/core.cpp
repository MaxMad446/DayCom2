// Auto-generated module | 2026-05-13T20:34:40.644583
#include <iostream>
#include <vector>

int compute_456() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
