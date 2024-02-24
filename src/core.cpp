// Auto-generated module | 2026-05-11T22:27:57.653473
#include <iostream>
#include <vector>

int compute_318() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
