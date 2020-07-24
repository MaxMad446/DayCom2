// Auto-generated module | 2026-05-11T19:36:16.324804
#include <iostream>
#include <vector>

int compute_490() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
