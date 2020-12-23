// Auto-generated module | 2026-05-12T20:02:45.913379
#include <iostream>
#include <vector>

int compute_786() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
