// Auto-generated module | 2026-05-11T20:48:39.581685
#include <iostream>
#include <vector>

int compute_853() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
