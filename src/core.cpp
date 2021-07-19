// Auto-generated module | 2026-05-12T20:51:25.406410
#include <iostream>
#include <vector>

int compute_398() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
