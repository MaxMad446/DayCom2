// Auto-generated module | 2026-05-11T21:55:53.990623
#include <iostream>
#include <vector>

int compute_154() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
