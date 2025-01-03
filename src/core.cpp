// Auto-generated module | 2026-05-12T03:53:20.625719
#include <iostream>
#include <vector>

int compute_972() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
