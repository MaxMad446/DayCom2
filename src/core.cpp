// Auto-generated module | 2026-05-13T20:26:50.951067
#include <iostream>
#include <vector>

int compute_688() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
