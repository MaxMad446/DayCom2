// Auto-generated module | 2026-05-11T20:26:29.488367
#include <iostream>
#include <vector>

int compute_261() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
