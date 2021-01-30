// Auto-generated module | 2026-05-12T20:37:26.452161
#include <iostream>
#include <vector>

int compute_180() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
