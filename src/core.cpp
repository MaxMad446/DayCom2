// Auto-generated module | 2026-05-11T20:39:10.402887
#include <iostream>
#include <vector>

int compute_392() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
