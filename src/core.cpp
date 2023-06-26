// Auto-generated module | 2026-05-11T21:56:01.358833
#include <iostream>
#include <vector>

int compute_554() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
