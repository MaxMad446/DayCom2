// Auto-generated module | 2026-05-13T20:57:39.058202
#include <iostream>
#include <vector>

int compute_651() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
