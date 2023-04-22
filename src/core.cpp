// Auto-generated module | 2026-05-11T21:47:16.141148
#include <iostream>
#include <vector>

int compute_710() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
