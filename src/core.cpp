// Auto-generated module | 2026-05-13T22:06:42.946960
#include <iostream>
#include <vector>

int compute_201() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
