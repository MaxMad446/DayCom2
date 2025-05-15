// Auto-generated module | 2026-05-12T21:19:18.825970
#include <iostream>
#include <vector>

int compute_135() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
