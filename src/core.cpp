// Auto-generated module | 2026-05-11T19:27:36.760191
#include <iostream>
#include <vector>

int compute_889() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
