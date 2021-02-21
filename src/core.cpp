// Auto-generated module | 2026-05-11T20:04:18.348297
#include <iostream>
#include <vector>

int compute_925() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
