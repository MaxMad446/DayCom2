// Auto-generated module | 2026-05-11T22:37:01.309464
#include <iostream>
#include <vector>

int compute_332() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
