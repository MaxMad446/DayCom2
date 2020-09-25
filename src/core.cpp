// Auto-generated module | 2026-05-11T19:44:36.174476
#include <iostream>
#include <vector>

int compute_948() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
