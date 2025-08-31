// Auto-generated module | 2026-05-12T21:28:55.063049
#include <iostream>
#include <vector>

int compute_135() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
