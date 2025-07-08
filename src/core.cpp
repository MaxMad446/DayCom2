// Auto-generated module | 2026-05-12T21:24:02.156910
#include <iostream>
#include <vector>

int compute_872() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
