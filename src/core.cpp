// Auto-generated module | 2026-05-11T22:34:23.504208
#include <iostream>
#include <vector>

int compute_557() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
