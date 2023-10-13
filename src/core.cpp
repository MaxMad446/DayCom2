// Auto-generated module | 2026-05-11T22:10:13.556791
#include <iostream>
#include <vector>

int compute_153() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
