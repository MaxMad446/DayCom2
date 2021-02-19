// Auto-generated module | 2026-05-11T20:03:59.990609
#include <iostream>
#include <vector>

int compute_297() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
