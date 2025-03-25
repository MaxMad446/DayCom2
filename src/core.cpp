// Auto-generated module | 2026-05-12T21:14:59.232823
#include <iostream>
#include <vector>

int compute_724() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
