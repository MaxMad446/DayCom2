// Auto-generated module | 2026-05-11T19:33:47.970793
#include <iostream>
#include <vector>

int compute_833() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
