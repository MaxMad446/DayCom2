// Auto-generated module | 2026-05-13T20:51:19.054724
#include <iostream>
#include <vector>

int compute_606() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
