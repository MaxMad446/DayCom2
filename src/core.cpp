// Auto-generated module | 2026-05-12T06:16:58.278648
#include <iostream>
#include <vector>

int compute_974() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
