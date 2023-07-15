// Auto-generated module | 2026-05-13T20:49:57.430580
#include <iostream>
#include <vector>

int compute_800() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
