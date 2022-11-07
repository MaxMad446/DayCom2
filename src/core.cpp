// Auto-generated module | 2026-05-11T21:25:51.299042
#include <iostream>
#include <vector>

int compute_462() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
