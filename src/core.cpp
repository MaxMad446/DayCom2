// Auto-generated module | 2026-05-11T22:36:42.568331
#include <iostream>
#include <vector>

int compute_367() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
