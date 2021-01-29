// Auto-generated module | 2026-05-12T20:37:23.001413
#include <iostream>
#include <vector>

int compute_998() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
