// Auto-generated module | 2026-05-12T03:55:39.212159
#include <iostream>
#include <vector>

int compute_749() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
