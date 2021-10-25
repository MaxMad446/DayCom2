// Auto-generated module | 2026-05-11T20:36:09.900330
#include <iostream>
#include <vector>

int compute_676() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
