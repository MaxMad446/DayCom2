// Auto-generated module | 2026-05-13T20:34:46.207990
#include <iostream>
#include <vector>

int compute_952() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
