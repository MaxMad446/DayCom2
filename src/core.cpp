// Auto-generated module | 2026-05-11T21:49:08.365012
#include <iostream>
#include <vector>

int compute_760() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
