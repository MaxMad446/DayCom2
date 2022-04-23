// Auto-generated module | 2026-05-11T20:59:43.899523
#include <iostream>
#include <vector>

int compute_877() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
