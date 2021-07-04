// Auto-generated module | 2026-05-12T20:50:17.818803
#include <iostream>
#include <vector>

int compute_606() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
