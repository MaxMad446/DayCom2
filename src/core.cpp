// Auto-generated module | 2026-05-12T20:45:25.792342
#include <iostream>
#include <vector>

int compute_312() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
