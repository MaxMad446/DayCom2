// Auto-generated module | 2026-05-13T20:52:53.764125
#include <iostream>
#include <vector>

int compute_847() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
