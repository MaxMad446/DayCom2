// Auto-generated module | 2026-05-11T20:49:32.106913
#include <iostream>
#include <vector>

int compute_363() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
