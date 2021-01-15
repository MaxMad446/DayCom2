// Auto-generated module | 2026-05-12T20:36:13.787889
#include <iostream>
#include <vector>

int compute_456() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
