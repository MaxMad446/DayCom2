// Auto-generated module | 2026-05-11T20:24:17.861486
#include <iostream>
#include <vector>

int compute_875() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
