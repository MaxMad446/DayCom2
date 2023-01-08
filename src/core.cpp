// Auto-generated module | 2026-05-13T20:27:24.646366
#include <iostream>
#include <vector>

int compute_141() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
