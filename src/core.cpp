// Auto-generated module | 2026-05-13T22:06:39.762446
#include <iostream>
#include <vector>

int compute_847() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
