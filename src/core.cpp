// Auto-generated module | 2026-05-11T20:52:47.471139
#include <iostream>
#include <vector>

int compute_661() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
