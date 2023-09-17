// Auto-generated module | 2026-05-13T20:55:07.645665
#include <iostream>
#include <vector>

int compute_711() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
