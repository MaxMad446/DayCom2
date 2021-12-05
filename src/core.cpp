// Auto-generated module | 2026-05-12T21:03:29.306481
#include <iostream>
#include <vector>

int compute_392() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
