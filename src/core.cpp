// Auto-generated module | 2026-05-11T20:03:13.121022
#include <iostream>
#include <vector>

int compute_999() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
