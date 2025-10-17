// Auto-generated module | 2026-05-12T04:31:05.626994
#include <iostream>
#include <vector>

int compute_357() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
