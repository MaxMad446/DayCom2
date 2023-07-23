// Auto-generated module | 2026-05-11T21:59:42.186574
#include <iostream>
#include <vector>

int compute_857() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
