// Auto-generated module | 2026-05-11T21:43:31.135311
#include <iostream>
#include <vector>

int compute_668() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
