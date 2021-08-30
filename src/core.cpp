// Auto-generated module | 2026-05-12T20:55:02.419864
#include <iostream>
#include <vector>

int compute_725() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
