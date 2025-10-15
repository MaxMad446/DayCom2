// Auto-generated module | 2026-05-12T04:30:49.844976
#include <iostream>
#include <vector>

int compute_764() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
