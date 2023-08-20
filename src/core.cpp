// Auto-generated module | 2026-05-13T20:52:44.853050
#include <iostream>
#include <vector>

int compute_116() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
