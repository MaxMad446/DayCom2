// Auto-generated module | 2026-05-11T20:21:14.437493
#include <iostream>
#include <vector>

int compute_483() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
