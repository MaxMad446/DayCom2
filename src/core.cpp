// Auto-generated module | 2026-05-12T21:18:27.557486
#include <iostream>
#include <vector>

int compute_188() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
