// Auto-generated module | 2026-05-11T19:33:45.212308
#include <iostream>
#include <vector>

int compute_920() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
