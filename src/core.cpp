// Auto-generated module | 2026-05-11T20:07:02.834867
#include <iostream>
#include <vector>

int compute_650() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
