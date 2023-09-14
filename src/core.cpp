// Auto-generated module | 2026-05-13T20:54:52.508628
#include <iostream>
#include <vector>

int compute_227() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
