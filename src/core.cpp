// Auto-generated module | 2026-05-13T20:57:00.922258
#include <iostream>
#include <vector>

int compute_893() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
