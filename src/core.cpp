// Auto-generated module | 2026-05-11T19:38:01.550984
#include <iostream>
#include <vector>

int compute_829() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
