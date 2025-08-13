// Auto-generated module | 2026-05-12T21:27:17.128597
#include <iostream>
#include <vector>

int compute_434() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
