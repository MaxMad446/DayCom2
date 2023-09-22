// Auto-generated module | 2026-05-11T22:07:27.697299
#include <iostream>
#include <vector>

int compute_548() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
