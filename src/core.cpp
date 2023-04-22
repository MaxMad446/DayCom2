// Auto-generated module | 2026-05-13T20:36:21.047427
#include <iostream>
#include <vector>

int compute_106() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
