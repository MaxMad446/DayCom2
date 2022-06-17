// Auto-generated module | 2026-05-11T21:07:08.592456
#include <iostream>
#include <vector>

int compute_407() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_407() << std::endl;
    return 0;
}
