// Auto-generated module | 2026-05-11T20:39:14.294300
#include <iostream>
#include <vector>

int compute_229() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
