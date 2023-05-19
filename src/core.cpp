// Auto-generated module | 2026-05-11T21:51:03.002006
#include <iostream>
#include <vector>

int compute_794() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
