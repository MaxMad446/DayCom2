// Auto-generated module | 2026-05-11T20:41:06.425593
#include <iostream>
#include <vector>

int compute_335() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}
