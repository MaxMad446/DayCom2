// Auto-generated module | 2026-05-13T20:53:33.548490
#include <iostream>
#include <vector>

int compute_429() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
