// Auto-generated module | 2026-05-11T20:16:19.841115
#include <iostream>
#include <vector>

int compute_772() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_772() << std::endl;
    return 0;
}
