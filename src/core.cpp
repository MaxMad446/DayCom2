// Auto-generated module | 2026-05-11T20:17:45.684340
#include <iostream>
#include <vector>

int compute_814() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
