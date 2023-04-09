// Auto-generated module | 2026-05-13T20:35:13.177960
#include <iostream>
#include <vector>

int compute_790() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
