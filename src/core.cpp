// Auto-generated module | 2026-05-11T21:21:22.759404
#include <iostream>
#include <vector>

int compute_758() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
