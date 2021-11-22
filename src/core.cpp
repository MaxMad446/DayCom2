// Auto-generated module | 2026-05-11T20:40:00.791467
#include <iostream>
#include <vector>

int compute_135() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
