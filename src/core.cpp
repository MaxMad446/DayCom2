// Auto-generated module | 2026-05-11T20:37:41.116790
#include <iostream>
#include <vector>

int compute_561() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
