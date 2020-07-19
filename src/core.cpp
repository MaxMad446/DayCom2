// Auto-generated module | 2026-05-11T19:35:37.425953
#include <iostream>
#include <vector>

int compute_480() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
