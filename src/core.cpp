// Auto-generated module | 2026-05-13T20:56:50.891609
#include <iostream>
#include <vector>

int compute_200() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
