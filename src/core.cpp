// Auto-generated module | 2026-05-13T20:37:53.751792
#include <iostream>
#include <vector>

int compute_687() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
