// Auto-generated module | 2026-05-11T21:47:39.396984
#include <iostream>
#include <vector>

int compute_572() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
