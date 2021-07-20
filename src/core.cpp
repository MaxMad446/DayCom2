// Auto-generated module | 2026-05-11T20:23:39.075141
#include <iostream>
#include <vector>

int compute_711() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
