// Auto-generated module | 2026-05-12T20:01:39.054663
#include <iostream>
#include <vector>

int compute_410() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
