// Auto-generated module | 2026-05-11T21:44:23.406095
#include <iostream>
#include <vector>

int compute_342() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
