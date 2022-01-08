// Auto-generated module | 2026-05-11T20:46:06.091520
#include <iostream>
#include <vector>

int compute_721() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
