// Auto-generated module | 2026-05-11T21:07:59.189360
#include <iostream>
#include <vector>

int compute_286() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
