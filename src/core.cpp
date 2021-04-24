// Auto-generated module | 2026-05-12T20:44:11.858951
#include <iostream>
#include <vector>

int compute_345() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
