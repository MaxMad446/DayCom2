// Auto-generated module | 2026-05-11T20:25:23.553965
#include <iostream>
#include <vector>

int compute_612() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
