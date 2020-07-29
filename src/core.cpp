// Auto-generated module | 2026-05-11T19:36:57.859300
#include <iostream>
#include <vector>

int compute_606() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
