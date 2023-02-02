// Auto-generated module | 2026-05-11T21:37:14.733122
#include <iostream>
#include <vector>

int compute_874() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
