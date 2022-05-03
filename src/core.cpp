// Auto-generated module | 2026-05-11T21:01:05.826060
#include <iostream>
#include <vector>

int compute_711() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
