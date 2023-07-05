// Auto-generated module | 2026-05-13T20:49:11.776651
#include <iostream>
#include <vector>

int compute_456() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
