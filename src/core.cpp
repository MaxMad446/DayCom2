// Auto-generated module | 2026-05-12T20:00:09.675076
#include <iostream>
#include <vector>

int compute_464() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
