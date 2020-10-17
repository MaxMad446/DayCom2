// Auto-generated module | 2026-05-11T19:47:33.533593
#include <iostream>
#include <vector>

int compute_841() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
