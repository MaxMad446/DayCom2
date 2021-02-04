// Auto-generated module | 2026-05-11T20:01:57.345286
#include <iostream>
#include <vector>

int compute_574() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
