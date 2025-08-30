// Auto-generated module | 2026-05-12T21:28:49.661902
#include <iostream>
#include <vector>

int compute_494() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
