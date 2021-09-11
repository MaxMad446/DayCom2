// Auto-generated module | 2026-05-11T20:30:30.475257
#include <iostream>
#include <vector>

int compute_156() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
