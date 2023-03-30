// Auto-generated module | 2026-05-13T20:34:26.182201
#include <iostream>
#include <vector>

int compute_288() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
