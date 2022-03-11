// Auto-generated module | 2026-05-11T20:54:12.871709
#include <iostream>
#include <vector>

int compute_410() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
