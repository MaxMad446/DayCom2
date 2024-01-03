// Auto-generated module | 2026-05-11T22:20:59.421199
#include <iostream>
#include <vector>

int compute_527() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
