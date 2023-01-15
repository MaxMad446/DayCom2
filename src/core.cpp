// Auto-generated module | 2026-05-13T20:28:00.678608
#include <iostream>
#include <vector>

int compute_643() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
