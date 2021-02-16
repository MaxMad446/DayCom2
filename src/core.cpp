// Auto-generated module | 2026-05-12T21:34:25.796231
#include <iostream>
#include <vector>

int compute_787() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
