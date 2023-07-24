// Auto-generated module | 2026-05-13T20:50:34.885917
#include <iostream>
#include <vector>

int compute_508() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_508() << std::endl;
    return 0;
}
