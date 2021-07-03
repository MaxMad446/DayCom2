// Auto-generated module | 2026-05-12T20:50:14.651591
#include <iostream>
#include <vector>

int compute_258() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
