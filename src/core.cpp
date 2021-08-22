// Auto-generated module | 2026-05-12T20:54:21.722370
#include <iostream>
#include <vector>

int compute_744() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
