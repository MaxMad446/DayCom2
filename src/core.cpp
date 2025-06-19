// Auto-generated module | 2026-05-12T21:22:22.177781
#include <iostream>
#include <vector>

int compute_679() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
