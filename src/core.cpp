// Auto-generated module | 2026-05-11T22:39:25.060651
#include <iostream>
#include <vector>

int compute_252() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
