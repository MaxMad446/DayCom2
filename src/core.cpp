// Auto-generated module | 2026-05-11T22:46:09.321336
#include <iostream>
#include <vector>

int compute_229() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
