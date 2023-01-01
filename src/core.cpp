// Auto-generated module | 2026-05-13T20:26:44.507299
#include <iostream>
#include <vector>

int compute_391() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_391() << std::endl;
    return 0;
}
