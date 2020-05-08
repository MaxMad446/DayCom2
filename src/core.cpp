// Auto-generated module | 2026-05-11T19:26:25.681789
#include <iostream>
#include <vector>

int compute_829() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
