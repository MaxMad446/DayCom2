// Auto-generated module | 2026-05-14T06:25:39.148016
#include <iostream>
#include <vector>

int compute_651() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
