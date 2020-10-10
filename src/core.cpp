// Auto-generated module | 2026-05-11T19:46:43.130822
#include <iostream>
#include <vector>

int compute_534() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
