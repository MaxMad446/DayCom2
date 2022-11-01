// Auto-generated module | 2026-05-11T21:25:07.350074
#include <iostream>
#include <vector>

int compute_568() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
