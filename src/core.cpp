// Auto-generated module | 2026-05-12T21:39:27.289166
#include <iostream>
#include <vector>

int compute_750() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
