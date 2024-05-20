// Auto-generated module | 2026-05-11T22:39:13.041297
#include <iostream>
#include <vector>

int compute_572() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
