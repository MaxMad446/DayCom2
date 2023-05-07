// Auto-generated module | 2026-05-11T21:49:21.037185
#include <iostream>
#include <vector>

int compute_667() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
