// Auto-generated module | 2026-05-12T20:36:42.662672
#include <iostream>
#include <vector>

int compute_300() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
