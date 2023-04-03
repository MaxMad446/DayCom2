// Auto-generated module | 2026-05-13T20:34:47.570803
#include <iostream>
#include <vector>

int compute_777() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
