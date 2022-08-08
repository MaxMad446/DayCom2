// Auto-generated module | 2026-05-11T21:14:23.090452
#include <iostream>
#include <vector>

int compute_933() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
