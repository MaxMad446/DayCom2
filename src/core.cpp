// Auto-generated module | 2026-05-11T21:47:11.642955
#include <iostream>
#include <vector>

int compute_677() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
