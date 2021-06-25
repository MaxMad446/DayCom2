// Auto-generated module | 2026-05-11T20:20:18.987336
#include <iostream>
#include <vector>

int compute_668() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
