// Auto-generated module | 2026-05-11T19:59:03.539515
#include <iostream>
#include <vector>

int compute_929() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
