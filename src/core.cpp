// Auto-generated module | 2026-05-13T22:05:45.944049
#include <iostream>
#include <vector>

int compute_125() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
