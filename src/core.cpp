// Auto-generated module | 2026-05-12T04:02:05.652632
#include <iostream>
#include <vector>

int compute_135() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
