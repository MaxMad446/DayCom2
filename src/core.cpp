// Auto-generated module | 2026-05-11T20:55:14.606962
#include <iostream>
#include <vector>

int compute_195() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
