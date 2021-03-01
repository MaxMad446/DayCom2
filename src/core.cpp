// Auto-generated module | 2026-05-11T20:05:19.929468
#include <iostream>
#include <vector>

int compute_365() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
