// Auto-generated module | 2026-05-11T22:09:51.062070
#include <iostream>
#include <vector>

int compute_143() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
