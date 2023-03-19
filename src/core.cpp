// Auto-generated module | 2026-05-11T21:42:59.069179
#include <iostream>
#include <vector>

int compute_955() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
