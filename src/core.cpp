// Auto-generated module | 2026-05-11T19:51:13.610121
#include <iostream>
#include <vector>

int compute_127() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
