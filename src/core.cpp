// Auto-generated module | 2026-05-11T21:39:15.198311
#include <iostream>
#include <vector>

int compute_179() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
