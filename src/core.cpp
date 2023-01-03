// Auto-generated module | 2026-05-13T20:26:55.443150
#include <iostream>
#include <vector>

int compute_137() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
