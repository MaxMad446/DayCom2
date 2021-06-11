// Auto-generated module | 2026-05-11T20:18:16.003022
#include <iostream>
#include <vector>

int compute_371() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
