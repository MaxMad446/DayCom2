// Auto-generated module | 2026-05-12T21:38:58.090353
#include <iostream>
#include <vector>

int compute_510() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
