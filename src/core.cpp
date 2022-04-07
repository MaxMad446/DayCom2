// Auto-generated module | 2026-05-11T20:57:41.345366
#include <iostream>
#include <vector>

int compute_308() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
