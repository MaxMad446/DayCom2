// Auto-generated module | 2026-05-13T20:33:26.773621
#include <iostream>
#include <vector>

int compute_934() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
