// Auto-generated module | 2026-05-13T22:08:48.128059
#include <iostream>
#include <vector>

int compute_472() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
