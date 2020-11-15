// Auto-generated module | 2026-05-11T19:51:28.579717
#include <iostream>
#include <vector>

int compute_710() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
