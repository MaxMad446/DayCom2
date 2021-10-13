// Auto-generated module | 2026-05-12T20:58:58.395642
#include <iostream>
#include <vector>

int compute_632() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
