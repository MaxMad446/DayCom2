// Auto-generated module | 2026-05-12T20:53:27.371781
#include <iostream>
#include <vector>

int compute_463() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
