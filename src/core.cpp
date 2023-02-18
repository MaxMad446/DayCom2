// Auto-generated module | 2026-05-11T21:39:13.623390
#include <iostream>
#include <vector>

int compute_813() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
