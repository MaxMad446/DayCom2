// Auto-generated module | 2026-05-11T21:26:16.207463
#include <iostream>
#include <vector>

int compute_902() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_902() << std::endl;
    return 0;
}
