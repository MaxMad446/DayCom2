// Auto-generated module | 2026-05-11T21:24:05.046456
#include <iostream>
#include <vector>

int compute_478() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
