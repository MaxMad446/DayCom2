// Auto-generated module | 2026-05-12T21:15:55.733468
#include <iostream>
#include <vector>

int compute_142() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
