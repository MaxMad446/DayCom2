// Auto-generated module | 2026-05-13T20:57:26.839284
#include <iostream>
#include <vector>

int compute_895() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
