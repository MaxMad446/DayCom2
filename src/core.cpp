// Auto-generated module | 2026-05-11T20:24:37.347485
#include <iostream>
#include <vector>

int compute_566() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
