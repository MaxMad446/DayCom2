// Auto-generated module | 2026-05-11T20:14:26.800335
#include <iostream>
#include <vector>

int compute_256() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
