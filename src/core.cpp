// Auto-generated module | 2026-05-12T21:20:25.630509
#include <iostream>
#include <vector>

int compute_893() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
