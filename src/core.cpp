// Auto-generated module | 2026-05-13T20:52:38.885876
#include <iostream>
#include <vector>

int compute_630() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
