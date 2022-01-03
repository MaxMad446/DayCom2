// Auto-generated module | 2026-05-11T20:45:33.154792
#include <iostream>
#include <vector>

int compute_732() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
