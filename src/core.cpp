// Auto-generated module | 2026-05-13T20:32:27.562681
#include <iostream>
#include <vector>

int compute_963() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
