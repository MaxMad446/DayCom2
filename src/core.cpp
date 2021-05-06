// Auto-generated module | 2026-05-12T20:45:16.951935
#include <iostream>
#include <vector>

int compute_467() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
