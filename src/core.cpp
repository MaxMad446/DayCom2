// Auto-generated module | 2026-05-13T22:11:45.670567
#include <iostream>
#include <vector>

int compute_113() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
