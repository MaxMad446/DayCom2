// Auto-generated module | 2026-05-11T21:51:56.076112
#include <iostream>
#include <vector>

int compute_456() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
