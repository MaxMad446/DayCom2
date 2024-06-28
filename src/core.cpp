// Auto-generated module | 2026-05-11T22:44:07.444637
#include <iostream>
#include <vector>

int compute_568() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
