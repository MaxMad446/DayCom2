// Auto-generated module | 2026-05-11T19:37:46.029754
#include <iostream>
#include <vector>

int compute_513() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
