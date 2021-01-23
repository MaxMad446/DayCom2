// Auto-generated module | 2026-05-12T20:36:48.898360
#include <iostream>
#include <vector>

int compute_604() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
