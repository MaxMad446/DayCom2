// Auto-generated module | 2026-05-12T20:53:34.222481
#include <iostream>
#include <vector>

int compute_532() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
