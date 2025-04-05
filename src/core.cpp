// Auto-generated module | 2026-05-12T04:05:13.013056
#include <iostream>
#include <vector>

int compute_833() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
