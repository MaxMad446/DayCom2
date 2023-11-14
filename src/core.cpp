// Auto-generated module | 2026-05-13T20:59:54.853056
#include <iostream>
#include <vector>

int compute_865() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
