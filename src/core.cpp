// Auto-generated module | 2026-05-12T20:02:38.392800
#include <iostream>
#include <vector>

int compute_127() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
