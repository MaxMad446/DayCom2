// Auto-generated module | 2026-05-12T21:36:30.680199
#include <iostream>
#include <vector>

int compute_345() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
