// Auto-generated module | 2026-05-12T03:55:28.328754
#include <iostream>
#include <vector>

int compute_668() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
