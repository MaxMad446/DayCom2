// Auto-generated module | 2026-05-11T21:18:55.838301
#include <iostream>
#include <vector>

int compute_443() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
