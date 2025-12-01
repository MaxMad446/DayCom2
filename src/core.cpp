// Auto-generated module | 2026-05-12T04:37:04.031508
#include <iostream>
#include <vector>

int compute_329() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
