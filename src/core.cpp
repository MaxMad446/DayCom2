// Auto-generated module | 2026-05-12T03:54:58.559331
#include <iostream>
#include <vector>

int compute_633() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
