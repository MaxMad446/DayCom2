// Auto-generated module | 2026-05-12T20:56:03.864945
#include <iostream>
#include <vector>

int compute_239() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
