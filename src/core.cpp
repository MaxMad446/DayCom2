// Auto-generated module | 2026-05-12T20:40:10.062738
#include <iostream>
#include <vector>

int compute_454() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
