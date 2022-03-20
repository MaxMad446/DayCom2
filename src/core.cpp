// Auto-generated module | 2026-05-13T22:07:02.890774
#include <iostream>
#include <vector>

int compute_286() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
