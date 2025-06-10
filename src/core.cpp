// Auto-generated module | 2026-05-12T21:21:35.434377
#include <iostream>
#include <vector>

int compute_153() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
