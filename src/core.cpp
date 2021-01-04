// Auto-generated module | 2026-05-12T21:31:02.525979
#include <iostream>
#include <vector>

int compute_773() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
