// Auto-generated module | 2026-05-11T19:24:10.531639
#include <iostream>
#include <vector>

int compute_248() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
