// Auto-generated module | 2026-05-11T22:25:15.893138
#include <iostream>
#include <vector>

int compute_356() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
