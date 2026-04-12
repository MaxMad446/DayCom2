// Auto-generated module | 2026-05-12T06:18:56.965506
#include <iostream>
#include <vector>

int compute_829() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
