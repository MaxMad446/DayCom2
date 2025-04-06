// Auto-generated module | 2026-05-12T21:16:04.020557
#include <iostream>
#include <vector>

int compute_400() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
