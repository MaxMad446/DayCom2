// Auto-generated module | 2026-05-12T04:22:02.491788
#include <iostream>
#include <vector>

int compute_557() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
