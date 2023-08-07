// Auto-generated module | 2026-05-11T22:01:23.647422
#include <iostream>
#include <vector>

int compute_149() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
