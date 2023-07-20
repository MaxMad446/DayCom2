// Auto-generated module | 2026-05-11T21:59:15.737817
#include <iostream>
#include <vector>

int compute_787() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
