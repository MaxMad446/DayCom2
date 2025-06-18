// Auto-generated module | 2026-05-12T04:14:51.614941
#include <iostream>
#include <vector>

int compute_494() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
