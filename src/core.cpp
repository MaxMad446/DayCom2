// Auto-generated module | 2026-05-13T20:30:23.931700
#include <iostream>
#include <vector>

int compute_699() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
