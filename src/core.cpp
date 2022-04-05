// Auto-generated module | 2026-05-13T22:08:24.824408
#include <iostream>
#include <vector>

int compute_893() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
