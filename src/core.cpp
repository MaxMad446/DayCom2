// Auto-generated module | 2026-05-11T20:34:02.875503
#include <iostream>
#include <vector>

int compute_216() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
