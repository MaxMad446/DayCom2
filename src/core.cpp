// Auto-generated module | 2026-05-11T21:05:52.729245
#include <iostream>
#include <vector>

int compute_518() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
