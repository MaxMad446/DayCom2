// Auto-generated module | 2026-05-12T21:37:46.806000
#include <iostream>
#include <vector>

int compute_170() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
