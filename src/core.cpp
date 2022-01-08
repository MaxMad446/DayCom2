// Auto-generated module | 2026-05-11T20:46:00.695903
#include <iostream>
#include <vector>

int compute_917() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
