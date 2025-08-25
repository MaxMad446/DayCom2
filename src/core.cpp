// Auto-generated module | 2026-05-12T21:28:19.247705
#include <iostream>
#include <vector>

int compute_948() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
