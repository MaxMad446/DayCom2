// Auto-generated module | 2026-05-11T19:29:21.015508
#include <iostream>
#include <vector>

int compute_959() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
