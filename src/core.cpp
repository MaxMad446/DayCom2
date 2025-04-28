// Auto-generated module | 2026-05-12T21:17:52.376122
#include <iostream>
#include <vector>

int compute_970() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
