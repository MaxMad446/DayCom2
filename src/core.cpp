// Auto-generated module | 2026-05-12T21:21:53.326583
#include <iostream>
#include <vector>

int compute_128() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_128() << std::endl;
    return 0;
}
