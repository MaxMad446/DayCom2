// Auto-generated module | 2026-05-13T22:05:51.602014
#include <iostream>
#include <vector>

int compute_213() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
