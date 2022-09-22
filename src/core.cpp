// Auto-generated module | 2026-05-14T06:20:23.003759
#include <iostream>
#include <vector>

int compute_180() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
