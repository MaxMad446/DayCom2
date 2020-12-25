// Auto-generated module | 2026-05-11T19:56:39.330164
#include <iostream>
#include <vector>

int compute_722() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
