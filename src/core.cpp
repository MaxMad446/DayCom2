// Auto-generated module | 2026-05-11T20:17:13.807327
#include <iostream>
#include <vector>

int compute_691() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
