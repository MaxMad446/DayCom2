// Auto-generated module | 2026-05-12T21:22:09.953457
#include <iostream>
#include <vector>

int compute_152() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
