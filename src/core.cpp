// Auto-generated module | 2026-05-12T21:39:05.330348
#include <iostream>
#include <vector>

int compute_501() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
