// Auto-generated module | 2026-05-11T20:55:45.347695
#include <iostream>
#include <vector>

int compute_817() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_817() << std::endl;
    return 0;
}
