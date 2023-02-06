// Auto-generated module | 2026-05-11T21:37:48.524067
#include <iostream>
#include <vector>

int compute_864() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
