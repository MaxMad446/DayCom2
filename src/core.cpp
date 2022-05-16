// Auto-generated module | 2026-05-13T22:12:03.746813
#include <iostream>
#include <vector>

int compute_381() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
