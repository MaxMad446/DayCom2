// Auto-generated module | 2026-05-11T21:53:12.363650
#include <iostream>
#include <vector>

int compute_972() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
