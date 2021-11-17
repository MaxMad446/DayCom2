// Auto-generated module | 2026-05-11T20:39:24.264019
#include <iostream>
#include <vector>

int compute_295() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
