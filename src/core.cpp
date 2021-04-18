// Auto-generated module | 2026-05-12T20:43:44.943909
#include <iostream>
#include <vector>

int compute_215() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
