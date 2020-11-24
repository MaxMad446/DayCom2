// Auto-generated module | 2026-05-12T20:00:17.644004
#include <iostream>
#include <vector>

int compute_910() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_910() << std::endl;
    return 0;
}
