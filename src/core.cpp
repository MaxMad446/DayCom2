// Auto-generated module | 2026-05-12T20:00:43.217039
#include <iostream>
#include <vector>

int compute_135() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
