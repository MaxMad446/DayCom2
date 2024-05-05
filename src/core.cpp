// Auto-generated module | 2026-05-11T22:37:06.781496
#include <iostream>
#include <vector>

int compute_273() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
