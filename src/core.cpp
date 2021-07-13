// Auto-generated module | 2026-05-11T20:22:41.134146
#include <iostream>
#include <vector>

int compute_605() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
