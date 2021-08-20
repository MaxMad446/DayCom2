// Auto-generated module | 2026-05-11T20:27:35.500286
#include <iostream>
#include <vector>

int compute_235() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
