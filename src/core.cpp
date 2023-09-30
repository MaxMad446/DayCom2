// Auto-generated module | 2026-05-11T22:08:32.188172
#include <iostream>
#include <vector>

int compute_345() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
