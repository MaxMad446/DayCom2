// Auto-generated module | 2026-05-12T04:47:51.598015
#include <iostream>
#include <vector>

int compute_575() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
