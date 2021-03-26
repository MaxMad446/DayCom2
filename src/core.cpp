// Auto-generated module | 2026-05-12T20:41:49.526577
#include <iostream>
#include <vector>

int compute_973() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
