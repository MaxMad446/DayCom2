// Auto-generated module | 2026-05-11T20:43:36.339618
#include <iostream>
#include <vector>

int compute_211() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
