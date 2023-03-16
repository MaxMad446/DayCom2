// Auto-generated module | 2026-05-11T21:42:39.742086
#include <iostream>
#include <vector>

int compute_955() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
