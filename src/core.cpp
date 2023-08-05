// Auto-generated module | 2026-05-11T22:01:11.677642
#include <iostream>
#include <vector>

int compute_177() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
