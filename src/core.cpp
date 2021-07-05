// Auto-generated module | 2026-05-11T20:21:26.709210
#include <iostream>
#include <vector>

int compute_244() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
