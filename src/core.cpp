// Auto-generated module | 2026-05-12T21:16:43.542246
#include <iostream>
#include <vector>

int compute_668() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
