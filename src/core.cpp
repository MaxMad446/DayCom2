// Auto-generated module | 2026-05-12T20:40:14.623100
#include <iostream>
#include <vector>

int compute_454() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
