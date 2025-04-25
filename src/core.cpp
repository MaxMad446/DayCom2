// Auto-generated module | 2026-05-12T21:17:39.470903
#include <iostream>
#include <vector>

int compute_345() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
