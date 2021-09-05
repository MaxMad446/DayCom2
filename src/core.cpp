// Auto-generated module | 2026-05-12T20:55:38.361901
#include <iostream>
#include <vector>

int compute_960() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
