// Auto-generated module | 2026-05-11T22:24:12.954663
#include <iostream>
#include <vector>

int compute_710() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
