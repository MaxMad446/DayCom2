// Auto-generated module | 2026-05-11T21:59:30.695329
#include <iostream>
#include <vector>

int compute_457() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
