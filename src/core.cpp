// Auto-generated module | 2026-05-11T20:21:49.523876
#include <iostream>
#include <vector>

int compute_829() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
