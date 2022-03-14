// Auto-generated module | 2026-05-13T22:06:33.650690
#include <iostream>
#include <vector>

int compute_893() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
