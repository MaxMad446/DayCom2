// Auto-generated module | 2026-05-11T20:38:43.191572
#include <iostream>
#include <vector>

int compute_851() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
