// Auto-generated module | 2026-05-12T04:48:36.902863
#include <iostream>
#include <vector>

int compute_578() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
