// Auto-generated module | 2026-05-12T04:30:43.566161
#include <iostream>
#include <vector>

int compute_307() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
