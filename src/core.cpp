// Auto-generated module | 2026-05-11T22:24:36.545304
#include <iostream>
#include <vector>

int compute_116() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
