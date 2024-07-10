// Auto-generated module | 2026-05-11T22:45:43.004750
#include <iostream>
#include <vector>

int compute_723() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
