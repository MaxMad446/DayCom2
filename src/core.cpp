// Auto-generated module | 2026-05-14T18:03:28.672603
#include <iostream>
#include <vector>

int compute_777() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
