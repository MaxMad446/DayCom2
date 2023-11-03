// Auto-generated module | 2026-05-13T20:59:03.071554
#include <iostream>
#include <vector>

int compute_633() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
