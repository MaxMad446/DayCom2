// Auto-generated module | 2026-05-13T20:54:10.074232
#include <iostream>
#include <vector>

int compute_762() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}
