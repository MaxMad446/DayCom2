// Auto-generated module | 2026-05-11T22:48:31.396216
#include <iostream>
#include <vector>

int compute_807() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
