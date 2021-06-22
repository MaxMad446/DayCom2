// Auto-generated module | 2026-05-12T20:49:18.567660
#include <iostream>
#include <vector>

int compute_367() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
