// Auto-generated module | 2026-05-11T21:14:31.482388
#include <iostream>
#include <vector>

int compute_448() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
