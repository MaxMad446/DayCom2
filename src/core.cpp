// Auto-generated module | 2026-05-11T21:48:22.445188
#include <iostream>
#include <vector>

int compute_841() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
