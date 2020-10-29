// Auto-generated module | 2026-05-11T19:49:02.696265
#include <iostream>
#include <vector>

int compute_963() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
