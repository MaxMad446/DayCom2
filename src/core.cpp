// Auto-generated module | 2026-05-12T06:22:02.789576
#include <iostream>
#include <vector>

int compute_356() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
