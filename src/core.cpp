// Auto-generated module | 2026-05-13T20:55:40.094150
#include <iostream>
#include <vector>

int compute_660() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
