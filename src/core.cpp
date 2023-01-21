// Auto-generated module | 2026-05-13T20:28:28.762462
#include <iostream>
#include <vector>

int compute_580() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
