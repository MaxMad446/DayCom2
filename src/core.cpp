// Auto-generated module | 2026-05-11T22:49:45.772247
#include <iostream>
#include <vector>

int compute_417() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
