// Auto-generated module | 2026-05-11T19:55:54.690524
#include <iostream>
#include <vector>

int compute_614() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
