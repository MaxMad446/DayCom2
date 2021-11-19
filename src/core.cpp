// Auto-generated module | 2026-05-12T21:02:01.823924
#include <iostream>
#include <vector>

int compute_864() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
