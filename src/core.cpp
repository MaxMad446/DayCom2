// Auto-generated module | 2026-05-12T20:40:24.157890
#include <iostream>
#include <vector>

int compute_950() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}
