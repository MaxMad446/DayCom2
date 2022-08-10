// Auto-generated module | 2026-05-11T21:14:35.358023
#include <iostream>
#include <vector>

int compute_400() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
