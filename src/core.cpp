// Auto-generated module | 2026-05-11T20:55:08.138569
#include <iostream>
#include <vector>

int compute_156() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
