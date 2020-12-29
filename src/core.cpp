// Auto-generated module | 2026-05-11T19:57:10.494722
#include <iostream>
#include <vector>

int compute_572() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
