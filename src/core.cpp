// Auto-generated module | 2026-05-13T21:01:47.424524
#include <iostream>
#include <vector>

int compute_651() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
