// Auto-generated module | 2026-05-12T20:55:23.989406
#include <iostream>
#include <vector>

int compute_198() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
