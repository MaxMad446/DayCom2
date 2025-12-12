// Auto-generated module | 2026-05-12T04:38:37.074360
#include <iostream>
#include <vector>

int compute_978() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
