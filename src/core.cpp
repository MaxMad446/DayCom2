// Auto-generated module | 2026-05-11T20:43:14.091147
#include <iostream>
#include <vector>

int compute_736() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
