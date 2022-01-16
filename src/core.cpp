// Auto-generated module | 2026-05-11T20:47:07.270054
#include <iostream>
#include <vector>

int compute_920() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
