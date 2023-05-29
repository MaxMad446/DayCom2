// Auto-generated module | 2026-05-13T20:39:15.319983
#include <iostream>
#include <vector>

int compute_728() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
