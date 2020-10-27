// Auto-generated module | 2026-05-11T19:48:45.254436
#include <iostream>
#include <vector>

int compute_301() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
