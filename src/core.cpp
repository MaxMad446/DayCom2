// Auto-generated module | 2026-05-11T20:39:20.308596
#include <iostream>
#include <vector>

int compute_710() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
