// Auto-generated module | 2026-05-11T19:36:59.215541
#include <iostream>
#include <vector>

int compute_464() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
