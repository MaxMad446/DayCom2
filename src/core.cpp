// Auto-generated module | 2026-05-11T21:43:49.920196
#include <iostream>
#include <vector>

int compute_454() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
