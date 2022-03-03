// Auto-generated module | 2026-05-11T20:53:10.068651
#include <iostream>
#include <vector>

int compute_811() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
