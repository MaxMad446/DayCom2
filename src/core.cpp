// Auto-generated module | 2026-05-11T21:55:40.525831
#include <iostream>
#include <vector>

int compute_592() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
