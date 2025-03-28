// Auto-generated module | 2026-05-12T21:15:14.898071
#include <iostream>
#include <vector>

int compute_124() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
