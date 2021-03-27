// Auto-generated module | 2026-05-12T20:42:01.706546
#include <iostream>
#include <vector>

int compute_139() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
