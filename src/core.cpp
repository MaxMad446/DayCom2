// Auto-generated module | 2026-05-11T22:32:18.854230
#include <iostream>
#include <vector>

int compute_214() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
