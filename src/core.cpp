// Auto-generated module | 2026-05-11T20:08:40.541512
#include <iostream>
#include <vector>

int compute_188() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
