// Auto-generated module | 2026-05-11T22:22:29.341208
#include <iostream>
#include <vector>

int compute_446() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
