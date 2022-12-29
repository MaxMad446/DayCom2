// Auto-generated module | 2026-05-11T21:32:59.784538
#include <iostream>
#include <vector>

int compute_129() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
