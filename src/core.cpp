// Auto-generated module | 2026-05-11T19:55:17.363265
#include <iostream>
#include <vector>

int compute_741() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
