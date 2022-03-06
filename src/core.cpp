// Auto-generated module | 2026-05-11T20:53:33.202862
#include <iostream>
#include <vector>

int compute_940() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
