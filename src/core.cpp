// Auto-generated module | 2026-05-11T22:02:27.044249
#include <iostream>
#include <vector>

int compute_775() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
