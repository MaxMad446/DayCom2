// Auto-generated module | 2026-05-12T20:56:23.779968
#include <iostream>
#include <vector>

int compute_940() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
