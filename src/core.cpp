// Auto-generated module | 2026-05-11T20:11:32.851785
#include <iostream>
#include <vector>

int compute_865() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
