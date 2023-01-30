// Auto-generated module | 2026-05-13T20:29:21.886913
#include <iostream>
#include <vector>

int compute_295() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
