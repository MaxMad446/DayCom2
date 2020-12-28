// Auto-generated module | 2026-05-12T20:03:17.269078
#include <iostream>
#include <vector>

int compute_258() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
