// Auto-generated module | 2026-05-12T21:13:32.158357
#include <iostream>
#include <vector>

int compute_557() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
