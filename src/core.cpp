// Auto-generated module | 2026-05-11T21:28:24.996574
#include <iostream>
#include <vector>

int compute_813() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
