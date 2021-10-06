// Auto-generated module | 2026-05-11T20:33:29.803886
#include <iostream>
#include <vector>

int compute_614() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
