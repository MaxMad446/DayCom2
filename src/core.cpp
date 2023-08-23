// Auto-generated module | 2026-05-11T22:03:29.447215
#include <iostream>
#include <vector>

int compute_895() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
