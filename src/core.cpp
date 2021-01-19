// Auto-generated module | 2026-05-12T21:32:14.178799
#include <iostream>
#include <vector>

int compute_135() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
