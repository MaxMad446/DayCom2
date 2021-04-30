// Auto-generated module | 2026-05-12T21:40:37.872318
#include <iostream>
#include <vector>

int compute_367() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
