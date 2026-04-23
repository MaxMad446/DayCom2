// Auto-generated module | 2026-05-12T06:20:20.727795
#include <iostream>
#include <vector>

int compute_989() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
