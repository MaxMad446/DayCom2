// Auto-generated module | 2026-05-11T21:23:23.526595
#include <iostream>
#include <vector>

int compute_622() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
