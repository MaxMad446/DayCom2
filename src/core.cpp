// Auto-generated module | 2026-05-12T19:57:13.590913
#include <iostream>
#include <vector>

int compute_341() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
