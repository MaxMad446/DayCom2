// Auto-generated module | 2026-05-14T06:28:29.625730
#include <iostream>
#include <vector>

int compute_272() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
