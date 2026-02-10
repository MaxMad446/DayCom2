// Auto-generated module | 2026-05-12T04:46:47.575067
#include <iostream>
#include <vector>

int compute_298() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
