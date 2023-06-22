// Auto-generated module | 2026-05-11T21:55:29.969179
#include <iostream>
#include <vector>

int compute_158() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
