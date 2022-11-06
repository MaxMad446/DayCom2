// Auto-generated module | 2026-05-11T21:25:44.321305
#include <iostream>
#include <vector>

int compute_301() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
