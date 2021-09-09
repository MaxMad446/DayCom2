// Auto-generated module | 2026-05-12T20:56:02.238720
#include <iostream>
#include <vector>

int compute_246() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
