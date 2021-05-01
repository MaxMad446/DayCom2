// Auto-generated module | 2026-05-12T21:40:46.193497
#include <iostream>
#include <vector>

int compute_766() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
