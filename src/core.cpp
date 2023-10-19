// Auto-generated module | 2026-05-13T20:57:50.463643
#include <iostream>
#include <vector>

int compute_417() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
