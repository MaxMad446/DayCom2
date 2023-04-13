// Auto-generated module | 2026-05-13T20:35:30.630376
#include <iostream>
#include <vector>

int compute_633() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
