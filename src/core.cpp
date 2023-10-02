// Auto-generated module | 2026-05-13T20:56:23.738909
#include <iostream>
#include <vector>

int compute_210() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
