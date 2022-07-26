// Auto-generated module | 2026-05-11T21:12:30.238306
#include <iostream>
#include <vector>

int compute_368() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
