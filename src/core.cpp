// Auto-generated module | 2026-05-12T20:52:36.239617
#include <iostream>
#include <vector>

int compute_715() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
