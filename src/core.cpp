// Auto-generated module | 2026-05-11T20:12:49.802562
#include <iostream>
#include <vector>

int compute_528() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
