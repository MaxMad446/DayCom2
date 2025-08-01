// Auto-generated module | 2026-05-12T21:26:14.077450
#include <iostream>
#include <vector>

int compute_689() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
