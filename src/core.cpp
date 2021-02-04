// Auto-generated module | 2026-05-11T20:01:58.341556
#include <iostream>
#include <vector>

int compute_379() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
