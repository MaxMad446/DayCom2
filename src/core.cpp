// Auto-generated module | 2026-05-11T22:18:33.779030
#include <iostream>
#include <vector>

int compute_818() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
