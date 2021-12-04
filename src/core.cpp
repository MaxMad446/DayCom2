// Auto-generated module | 2026-05-11T20:41:42.099065
#include <iostream>
#include <vector>

int compute_127() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
