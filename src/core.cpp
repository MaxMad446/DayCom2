// Auto-generated module | 2026-05-11T21:03:15.810241
#include <iostream>
#include <vector>

int compute_515() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
