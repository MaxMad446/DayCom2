// Auto-generated module | 2026-05-11T22:30:22.308006
#include <iostream>
#include <vector>

int compute_787() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
