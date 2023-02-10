// Auto-generated module | 2026-05-13T20:30:19.605299
#include <iostream>
#include <vector>

int compute_829() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
