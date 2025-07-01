// Auto-generated module | 2026-05-12T21:23:25.834423
#include <iostream>
#include <vector>

int compute_502() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
