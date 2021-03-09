// Auto-generated module | 2026-05-11T20:06:18.067375
#include <iostream>
#include <vector>

int compute_124() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
