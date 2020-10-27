// Auto-generated module | 2026-05-11T19:48:50.537853
#include <iostream>
#include <vector>

int compute_522() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_522() << std::endl;
    return 0;
}
