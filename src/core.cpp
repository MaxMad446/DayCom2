// Auto-generated module | 2026-05-13T20:55:23.297169
#include <iostream>
#include <vector>

int compute_463() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
