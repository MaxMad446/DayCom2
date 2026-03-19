// Auto-generated module | 2026-05-12T04:51:49.619485
#include <iostream>
#include <vector>

int compute_635() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
