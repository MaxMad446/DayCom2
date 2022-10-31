// Auto-generated module | 2026-05-11T21:24:59.175360
#include <iostream>
#include <vector>

int compute_971() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
