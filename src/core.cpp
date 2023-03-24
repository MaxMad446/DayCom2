// Auto-generated module | 2026-05-13T20:33:57.984069
#include <iostream>
#include <vector>

int compute_841() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
