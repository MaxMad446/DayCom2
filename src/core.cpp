// Auto-generated module | 2026-05-14T06:15:37.879363
#include <iostream>
#include <vector>

int compute_361() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
