// Auto-generated module | 2026-05-11T20:06:12.554781
#include <iostream>
#include <vector>

int compute_256() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
