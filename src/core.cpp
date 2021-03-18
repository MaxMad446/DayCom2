// Auto-generated module | 2026-05-11T20:07:22.125949
#include <iostream>
#include <vector>

int compute_108() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
