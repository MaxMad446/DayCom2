// Auto-generated module | 2026-05-11T22:19:59.188161
#include <iostream>
#include <vector>

int compute_239() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
