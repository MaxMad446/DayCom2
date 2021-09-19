// Auto-generated module | 2026-05-12T20:56:56.822088
#include <iostream>
#include <vector>

int compute_213() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
