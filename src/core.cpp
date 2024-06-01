// Auto-generated module | 2026-05-11T22:40:37.163873
#include <iostream>
#include <vector>

int compute_240() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
