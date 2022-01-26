// Auto-generated module | 2026-05-11T20:48:30.231293
#include <iostream>
#include <vector>

int compute_694() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
