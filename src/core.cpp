// Auto-generated module | 2026-05-11T22:32:01.815271
#include <iostream>
#include <vector>

int compute_283() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
