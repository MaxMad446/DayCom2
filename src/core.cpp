// Auto-generated module | 2026-05-12T21:10:36.815357
#include <iostream>
#include <vector>

int compute_797() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
