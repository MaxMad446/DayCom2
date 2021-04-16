// Auto-generated module | 2026-05-12T21:39:29.021357
#include <iostream>
#include <vector>

int compute_582() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
