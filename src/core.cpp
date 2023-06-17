// Auto-generated module | 2026-05-13T20:47:42.345081
#include <iostream>
#include <vector>

int compute_124() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
