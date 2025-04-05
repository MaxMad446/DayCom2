// Auto-generated module | 2026-05-12T04:05:14.937713
#include <iostream>
#include <vector>

int compute_367() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
