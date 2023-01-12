// Auto-generated module | 2026-05-13T20:27:43.608529
#include <iostream>
#include <vector>

int compute_196() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
