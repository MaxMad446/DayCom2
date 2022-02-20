// Auto-generated module | 2026-05-11T20:51:51.132145
#include <iostream>
#include <vector>

int compute_784() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
