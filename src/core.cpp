// Auto-generated module | 2026-05-13T20:30:24.674699
#include <iostream>
#include <vector>

int compute_889() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
