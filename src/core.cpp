// Auto-generated module | 2026-05-12T21:16:05.083656
#include <iostream>
#include <vector>

int compute_725() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
