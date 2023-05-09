// Auto-generated module | 2026-05-13T20:37:41.378540
#include <iostream>
#include <vector>

int compute_376() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
