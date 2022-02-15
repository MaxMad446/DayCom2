// Auto-generated module | 2026-05-11T20:51:10.456594
#include <iostream>
#include <vector>

int compute_588() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
