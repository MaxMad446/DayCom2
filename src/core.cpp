// Auto-generated module | 2026-05-11T22:41:11.974939
#include <iostream>
#include <vector>

int compute_240() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
