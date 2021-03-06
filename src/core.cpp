// Auto-generated module | 2026-05-12T20:40:17.995257
#include <iostream>
#include <vector>

int compute_219() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
