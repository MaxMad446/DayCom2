// Auto-generated module | 2026-05-11T20:33:50.480229
#include <iostream>
#include <vector>

int compute_153() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
