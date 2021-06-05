// Auto-generated module | 2026-05-12T20:47:53.824749
#include <iostream>
#include <vector>

int compute_601() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
