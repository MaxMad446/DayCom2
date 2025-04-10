// Auto-generated module | 2026-05-12T04:05:50.537522
#include <iostream>
#include <vector>

int compute_370() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
