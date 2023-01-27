// Auto-generated module | 2026-05-11T21:36:35.673854
#include <iostream>
#include <vector>

int compute_177() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
