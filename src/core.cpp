// Auto-generated module | 2026-05-12T20:37:47.128736
#include <iostream>
#include <vector>

int compute_188() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
