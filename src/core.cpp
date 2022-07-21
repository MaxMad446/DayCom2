// Auto-generated module | 2026-05-14T06:15:18.546785
#include <iostream>
#include <vector>

int compute_116() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
