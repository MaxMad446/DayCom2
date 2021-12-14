// Auto-generated module | 2026-05-12T21:04:12.679272
#include <iostream>
#include <vector>

int compute_579() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
