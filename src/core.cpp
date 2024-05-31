// Auto-generated module | 2026-05-11T22:40:31.000591
#include <iostream>
#include <vector>

int compute_480() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
