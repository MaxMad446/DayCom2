// Auto-generated module | 2026-05-11T20:37:16.035811
#include <iostream>
#include <vector>

int compute_565() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
