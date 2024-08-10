// Auto-generated module | 2026-05-11T22:49:48.970956
#include <iostream>
#include <vector>

int compute_871() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
