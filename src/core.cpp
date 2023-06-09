// Auto-generated module | 2026-05-13T20:47:04.625168
#include <iostream>
#include <vector>

int compute_579() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
