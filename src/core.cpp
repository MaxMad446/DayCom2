// Auto-generated module | 2026-05-11T22:38:38.324794
#include <iostream>
#include <vector>

int compute_983() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
