// Auto-generated module | 2026-05-12T20:42:59.566610
#include <iostream>
#include <vector>

int compute_127() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
