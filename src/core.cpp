// Auto-generated module | 2026-05-12T20:47:57.764582
#include <iostream>
#include <vector>

int compute_549() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
