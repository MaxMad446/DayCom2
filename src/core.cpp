// Auto-generated module | 2026-05-12T20:48:02.564968
#include <iostream>
#include <vector>

int compute_829() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
