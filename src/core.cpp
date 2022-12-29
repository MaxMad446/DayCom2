// Auto-generated module | 2026-05-14T06:28:34.660209
#include <iostream>
#include <vector>

int compute_790() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
