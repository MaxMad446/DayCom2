// Auto-generated module | 2026-05-11T22:41:27.566809
#include <iostream>
#include <vector>

int compute_829() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
