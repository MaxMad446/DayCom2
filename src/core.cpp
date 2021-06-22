// Auto-generated module | 2026-05-12T20:49:17.227339
#include <iostream>
#include <vector>

int compute_368() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
