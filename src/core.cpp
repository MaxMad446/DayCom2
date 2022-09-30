// Auto-generated module | 2026-05-11T21:21:06.155130
#include <iostream>
#include <vector>

int compute_698() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
