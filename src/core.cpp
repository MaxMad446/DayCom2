// Auto-generated module | 2026-05-12T06:22:35.353144
#include <iostream>
#include <vector>

int compute_478() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
