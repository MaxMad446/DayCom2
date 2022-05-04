// Auto-generated module | 2026-05-13T22:10:59.721714
#include <iostream>
#include <vector>

int compute_432() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
