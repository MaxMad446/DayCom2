// Auto-generated module | 2026-05-12T21:34:17.312018
#include <iostream>
#include <vector>

int compute_169() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
