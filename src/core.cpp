// Auto-generated module | 2026-05-13T20:54:16.054095
#include <iostream>
#include <vector>

int compute_608() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
