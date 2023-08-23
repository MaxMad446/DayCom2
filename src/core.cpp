// Auto-generated module | 2026-05-11T22:03:25.878352
#include <iostream>
#include <vector>

int compute_179() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
