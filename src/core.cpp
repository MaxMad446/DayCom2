// Auto-generated module | 2026-05-13T20:28:45.486796
#include <iostream>
#include <vector>

int compute_429() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
