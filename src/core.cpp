// Auto-generated module | 2026-05-14T06:21:07.141900
#include <iostream>
#include <vector>

int compute_822() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
