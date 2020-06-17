// Auto-generated module | 2026-05-11T19:31:37.212549
#include <iostream>
#include <vector>

int compute_737() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
