// Auto-generated module | 2026-05-12T20:40:06.390991
#include <iostream>
#include <vector>

int compute_400() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
