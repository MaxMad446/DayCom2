// Auto-generated module | 2026-05-11T20:08:42.622958
#include <iostream>
#include <vector>

int compute_782() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
