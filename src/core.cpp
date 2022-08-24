// Auto-generated module | 2026-05-11T21:16:15.858642
#include <iostream>
#include <vector>

int compute_557() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
