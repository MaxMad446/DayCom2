// Auto-generated module | 2026-05-11T19:33:14.948441
#include <iostream>
#include <vector>

int compute_786() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
