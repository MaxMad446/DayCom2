// Auto-generated module | 2026-05-11T20:26:11.706401
#include <iostream>
#include <vector>

int compute_732() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
