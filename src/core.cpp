// Auto-generated module | 2026-05-11T20:44:24.912849
#include <iostream>
#include <vector>

int compute_414() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_414() << std::endl;
    return 0;
}
