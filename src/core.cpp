// Auto-generated module | 2026-05-11T19:47:22.605219
#include <iostream>
#include <vector>

int compute_455() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
