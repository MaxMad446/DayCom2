// Auto-generated module | 2026-05-11T22:01:53.816203
#include <iostream>
#include <vector>

int compute_701() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
