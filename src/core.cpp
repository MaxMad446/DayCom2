// Auto-generated module | 2026-05-11T20:52:17.740803
#include <iostream>
#include <vector>

int compute_940() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
