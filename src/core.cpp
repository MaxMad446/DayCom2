// Auto-generated module | 2026-05-13T20:37:11.855866
#include <iostream>
#include <vector>

int compute_855() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
