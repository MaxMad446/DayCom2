// Auto-generated module | 2026-05-12T20:59:33.268496
#include <iostream>
#include <vector>

int compute_927() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
