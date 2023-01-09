// Auto-generated module | 2026-05-13T20:27:29.473164
#include <iostream>
#include <vector>

int compute_998() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
