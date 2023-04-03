// Auto-generated module | 2026-05-11T21:44:57.692216
#include <iostream>
#include <vector>

int compute_132() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
