// Auto-generated module | 2026-05-12T03:58:34.871625
#include <iostream>
#include <vector>

int compute_893() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
