// Auto-generated module | 2026-05-13T20:57:53.467427
#include <iostream>
#include <vector>

int compute_308() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
