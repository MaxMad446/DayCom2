// Auto-generated module | 2026-05-11T21:35:13.611577
#include <iostream>
#include <vector>

int compute_384() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
