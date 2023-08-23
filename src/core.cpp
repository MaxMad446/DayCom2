// Auto-generated module | 2026-05-11T22:03:25.062161
#include <iostream>
#include <vector>

int compute_199() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
