// Auto-generated module | 2026-05-13T20:55:14.943955
#include <iostream>
#include <vector>

int compute_636() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
