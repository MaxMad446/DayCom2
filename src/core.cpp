// Auto-generated module | 2026-05-11T21:58:03.318835
#include <iostream>
#include <vector>

int compute_511() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
