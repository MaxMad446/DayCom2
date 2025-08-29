// Auto-generated module | 2026-05-12T21:28:42.668001
#include <iostream>
#include <vector>

int compute_635() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
