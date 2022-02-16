// Auto-generated module | 2026-05-13T22:04:24.510856
#include <iostream>
#include <vector>

int compute_674() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
