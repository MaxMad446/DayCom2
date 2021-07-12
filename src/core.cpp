// Auto-generated module | 2026-05-11T20:22:35.934028
#include <iostream>
#include <vector>

int compute_346() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
