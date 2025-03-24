// Auto-generated module | 2026-05-12T21:14:57.577469
#include <iostream>
#include <vector>

int compute_212() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_212() << std::endl;
    return 0;
}
