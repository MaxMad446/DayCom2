// Auto-generated module | 2026-05-11T22:45:18.592910
#include <iostream>
#include <vector>

int compute_737() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
