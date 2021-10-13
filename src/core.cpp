// Auto-generated module | 2026-05-12T20:58:57.525690
#include <iostream>
#include <vector>

int compute_653() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
