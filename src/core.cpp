// Auto-generated module | 2026-05-13T22:12:13.035156
#include <iostream>
#include <vector>

int compute_494() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
