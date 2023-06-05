// Auto-generated module | 2026-05-13T20:46:43.526998
#include <iostream>
#include <vector>

int compute_108() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
