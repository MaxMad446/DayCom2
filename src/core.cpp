// Auto-generated module | 2026-05-11T20:40:50.220269
#include <iostream>
#include <vector>

int compute_488() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
