// Auto-generated module | 2026-05-11T20:49:35.344880
#include <iostream>
#include <vector>

int compute_394() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
