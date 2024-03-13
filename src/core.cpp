// Auto-generated module | 2026-05-11T22:30:16.179106
#include <iostream>
#include <vector>

int compute_327() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
