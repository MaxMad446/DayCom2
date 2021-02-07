// Auto-generated module | 2026-05-11T20:02:21.822707
#include <iostream>
#include <vector>

int compute_857() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
