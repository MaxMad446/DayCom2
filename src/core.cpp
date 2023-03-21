// Auto-generated module | 2026-05-11T21:43:16.002945
#include <iostream>
#include <vector>

int compute_865() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
