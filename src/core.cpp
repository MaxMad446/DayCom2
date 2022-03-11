// Auto-generated module | 2026-05-11T20:54:14.836952
#include <iostream>
#include <vector>

int compute_973() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
