// Auto-generated module | 2026-05-11T20:47:45.340769
#include <iostream>
#include <vector>

int compute_888() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
