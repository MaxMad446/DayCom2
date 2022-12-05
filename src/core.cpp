// Auto-generated module | 2026-05-11T21:29:43.531248
#include <iostream>
#include <vector>

int compute_844() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
