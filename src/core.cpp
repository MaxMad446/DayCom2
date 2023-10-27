// Auto-generated module | 2026-05-11T22:12:03.381899
#include <iostream>
#include <vector>

int compute_143() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
