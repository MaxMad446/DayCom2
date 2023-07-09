// Auto-generated module | 2026-05-11T21:57:54.612541
#include <iostream>
#include <vector>

int compute_782() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
