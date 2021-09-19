// Auto-generated module | 2026-05-11T20:31:30.273198
#include <iostream>
#include <vector>

int compute_130() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
