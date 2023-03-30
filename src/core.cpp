// Auto-generated module | 2026-05-11T21:44:31.999875
#include <iostream>
#include <vector>

int compute_176() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
