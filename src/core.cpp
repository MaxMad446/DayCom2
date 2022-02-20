// Auto-generated module | 2026-05-13T22:04:44.054255
#include <iostream>
#include <vector>

int compute_710() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
