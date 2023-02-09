// Auto-generated module | 2026-05-13T20:30:17.236347
#include <iostream>
#include <vector>

int compute_671() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
