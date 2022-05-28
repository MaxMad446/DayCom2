// Auto-generated module | 2026-05-13T22:13:02.630559
#include <iostream>
#include <vector>

int compute_102() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
