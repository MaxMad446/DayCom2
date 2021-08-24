// Auto-generated module | 2026-05-12T20:54:33.601515
#include <iostream>
#include <vector>

int compute_193() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
