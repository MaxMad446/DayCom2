// Auto-generated module | 2026-05-13T20:59:51.611936
#include <iostream>
#include <vector>

int compute_725() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
