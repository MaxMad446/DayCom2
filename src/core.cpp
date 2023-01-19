// Auto-generated module | 2026-05-11T21:35:36.346735
#include <iostream>
#include <vector>

int compute_876() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
