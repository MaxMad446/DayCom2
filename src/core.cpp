// Auto-generated module | 2026-05-11T21:05:10.268926
#include <iostream>
#include <vector>

int compute_510() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
