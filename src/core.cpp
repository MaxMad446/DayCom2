// Auto-generated module | 2026-05-12T21:13:13.333955
#include <iostream>
#include <vector>

int compute_208() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
