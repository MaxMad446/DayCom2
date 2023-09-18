// Auto-generated module | 2026-05-13T20:55:10.309697
#include <iostream>
#include <vector>

int compute_456() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
