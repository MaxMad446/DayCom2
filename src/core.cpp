// Auto-generated module | 2026-05-11T20:54:28.038047
#include <iostream>
#include <vector>

int compute_793() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
