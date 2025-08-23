// Auto-generated module | 2026-05-12T04:23:43.220650
#include <iostream>
#include <vector>

int compute_643() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
