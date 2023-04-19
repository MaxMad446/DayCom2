// Auto-generated module | 2026-05-13T20:36:01.786165
#include <iostream>
#include <vector>

int compute_447() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
