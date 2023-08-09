// Auto-generated module | 2026-05-13T20:51:51.381479
#include <iostream>
#include <vector>

int compute_361() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
