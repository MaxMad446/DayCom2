// Auto-generated module | 2026-05-12T20:46:45.442012
#include <iostream>
#include <vector>

int compute_708() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
