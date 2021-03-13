// Auto-generated module | 2026-05-11T20:06:40.773743
#include <iostream>
#include <vector>

int compute_776() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
