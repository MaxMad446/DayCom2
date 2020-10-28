// Auto-generated module | 2026-05-11T19:48:53.800245
#include <iostream>
#include <vector>

int compute_531() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
