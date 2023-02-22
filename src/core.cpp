// Auto-generated module | 2026-05-13T20:31:15.511955
#include <iostream>
#include <vector>

int compute_749() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
