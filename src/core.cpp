// Auto-generated module | 2026-05-13T20:36:07.031253
#include <iostream>
#include <vector>

int compute_317() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
