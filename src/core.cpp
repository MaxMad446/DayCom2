// Auto-generated module | 2026-05-12T20:59:44.949878
#include <iostream>
#include <vector>

int compute_201() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
