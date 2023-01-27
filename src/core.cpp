// Auto-generated module | 2026-05-13T20:29:02.130044
#include <iostream>
#include <vector>

int compute_491() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
