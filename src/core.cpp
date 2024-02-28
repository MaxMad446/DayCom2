// Auto-generated module | 2026-05-11T22:28:28.290109
#include <iostream>
#include <vector>

int compute_699() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
