// Auto-generated module | 2026-05-12T20:50:24.609821
#include <iostream>
#include <vector>

int compute_195() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
