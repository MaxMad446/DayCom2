// Auto-generated module | 2026-05-11T22:22:07.744353
#include <iostream>
#include <vector>

int compute_890() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
