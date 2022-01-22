// Auto-generated module | 2026-05-11T20:47:55.797788
#include <iostream>
#include <vector>

int compute_948() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
