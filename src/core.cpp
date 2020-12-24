// Auto-generated module | 2026-05-11T19:56:34.577233
#include <iostream>
#include <vector>

int compute_229() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
