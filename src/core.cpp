// Auto-generated module | 2026-05-13T20:32:43.671556
#include <iostream>
#include <vector>

int compute_374() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
