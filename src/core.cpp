// Auto-generated module | 2026-05-11T20:10:50.057699
#include <iostream>
#include <vector>

int compute_569() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
