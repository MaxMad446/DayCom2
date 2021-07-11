// Auto-generated module | 2026-05-12T20:50:52.159573
#include <iostream>
#include <vector>

int compute_721() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
