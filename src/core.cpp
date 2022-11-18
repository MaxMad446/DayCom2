// Auto-generated module | 2026-05-11T21:27:23.008081
#include <iostream>
#include <vector>

int compute_417() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
