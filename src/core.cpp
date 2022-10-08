// Auto-generated module | 2026-05-11T21:22:02.555422
#include <iostream>
#include <vector>

int compute_953() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_953() << std::endl;
    return 0;
}
