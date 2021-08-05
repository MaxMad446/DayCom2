// Auto-generated module | 2026-05-11T20:25:41.644983
#include <iostream>
#include <vector>

int compute_771() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
