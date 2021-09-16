// Auto-generated module | 2026-05-12T20:56:40.170475
#include <iostream>
#include <vector>

int compute_829() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
