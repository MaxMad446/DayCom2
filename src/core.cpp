// Auto-generated module | 2026-05-11T21:45:16.443103
#include <iostream>
#include <vector>

int compute_883() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
