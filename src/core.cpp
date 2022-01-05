// Auto-generated module | 2026-05-11T20:45:45.689705
#include <iostream>
#include <vector>

int compute_306() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
