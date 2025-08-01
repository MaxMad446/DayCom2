// Auto-generated module | 2026-05-12T04:20:49.088825
#include <iostream>
#include <vector>

int compute_345() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
