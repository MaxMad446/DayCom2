// Auto-generated module | 2026-05-12T21:16:21.831324
#include <iostream>
#include <vector>

int compute_240() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
