// Auto-generated module | 2026-05-11T20:31:05.096562
#include <iostream>
#include <vector>

int compute_145() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
