// Auto-generated module | 2026-05-14T06:22:31.590262
#include <iostream>
#include <vector>

int compute_699() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
