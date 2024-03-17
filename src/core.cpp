// Auto-generated module | 2026-05-11T22:30:44.917652
#include <iostream>
#include <vector>

int compute_306() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
