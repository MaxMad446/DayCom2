// Auto-generated module | 2026-05-12T20:48:31.162000
#include <iostream>
#include <vector>

int compute_668() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
