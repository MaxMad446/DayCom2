// Auto-generated module | 2026-05-11T22:34:22.301590
#include <iostream>
#include <vector>

int compute_435() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
