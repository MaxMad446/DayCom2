// Auto-generated module | 2026-05-11T22:05:36.922181
#include <iostream>
#include <vector>

int compute_378() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
