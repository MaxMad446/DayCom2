// Auto-generated module | 2026-05-11T19:56:55.614694
#include <iostream>
#include <vector>

int compute_374() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
