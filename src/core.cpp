// Auto-generated module | 2026-05-11T20:06:50.764207
#include <iostream>
#include <vector>

int compute_295() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
