// Auto-generated module | 2026-05-11T19:57:21.971661
#include <iostream>
#include <vector>

int compute_743() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
