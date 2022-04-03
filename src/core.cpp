// Auto-generated module | 2026-05-11T20:57:07.696317
#include <iostream>
#include <vector>

int compute_237() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
