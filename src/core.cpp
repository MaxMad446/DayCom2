// Auto-generated module | 2026-05-11T22:07:25.031900
#include <iostream>
#include <vector>

int compute_567() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
