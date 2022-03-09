// Auto-generated module | 2026-05-11T20:54:00.120194
#include <iostream>
#include <vector>

int compute_534() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
