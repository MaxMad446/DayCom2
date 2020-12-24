// Auto-generated module | 2026-05-12T20:02:55.831673
#include <iostream>
#include <vector>

int compute_442() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
