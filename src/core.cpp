// Auto-generated module | 2026-05-11T21:06:00.409852
#include <iostream>
#include <vector>

int compute_116() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
