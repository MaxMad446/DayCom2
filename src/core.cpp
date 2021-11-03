// Auto-generated module | 2026-05-11T20:37:22.598508
#include <iostream>
#include <vector>

int compute_334() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
