// Auto-generated module | 2026-05-11T20:34:13.667485
#include <iostream>
#include <vector>

int compute_425() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
