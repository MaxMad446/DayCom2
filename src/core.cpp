// Auto-generated module | 2026-05-11T20:33:38.121201
#include <iostream>
#include <vector>

int compute_491() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
