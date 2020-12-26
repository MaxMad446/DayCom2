// Auto-generated module | 2026-05-12T20:03:03.291346
#include <iostream>
#include <vector>

int compute_539() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
