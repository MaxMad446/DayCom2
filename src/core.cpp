// Auto-generated module | 2026-05-13T22:08:50.724735
#include <iostream>
#include <vector>

int compute_364() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
