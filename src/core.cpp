// Auto-generated module | 2026-05-12T21:33:12.619138
#include <iostream>
#include <vector>

int compute_824() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
