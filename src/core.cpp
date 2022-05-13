// Auto-generated module | 2026-05-13T22:11:48.205450
#include <iostream>
#include <vector>

int compute_381() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
