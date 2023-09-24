// Auto-generated module | 2026-05-11T22:07:44.150295
#include <iostream>
#include <vector>

int compute_101() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
