// Auto-generated module | 2026-05-12T20:44:04.029789
#include <iostream>
#include <vector>

int compute_110() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
