// Auto-generated module | 2026-05-12T21:19:50.346912
#include <iostream>
#include <vector>

int compute_356() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
