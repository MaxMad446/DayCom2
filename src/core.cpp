// Auto-generated module | 2026-05-11T21:35:35.523304
#include <iostream>
#include <vector>

int compute_108() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
