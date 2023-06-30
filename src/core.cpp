// Auto-generated module | 2026-05-13T20:48:38.208352
#include <iostream>
#include <vector>

int compute_383() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
