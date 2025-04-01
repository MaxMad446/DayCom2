// Auto-generated module | 2026-05-12T21:15:37.307944
#include <iostream>
#include <vector>

int compute_791() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
