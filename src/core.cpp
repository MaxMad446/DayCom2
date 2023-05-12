// Auto-generated module | 2026-05-11T21:49:55.929420
#include <iostream>
#include <vector>

int compute_431() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
