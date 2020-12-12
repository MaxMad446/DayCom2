// Auto-generated module | 2026-05-11T19:55:01.962128
#include <iostream>
#include <vector>

int compute_865() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
