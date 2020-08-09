// Auto-generated module | 2026-05-11T19:38:26.209952
#include <iostream>
#include <vector>

int compute_787() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
