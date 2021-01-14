// Auto-generated module | 2026-05-11T19:59:12.894831
#include <iostream>
#include <vector>

int compute_135() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
