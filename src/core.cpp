// Auto-generated module | 2026-05-11T20:58:25.452095
#include <iostream>
#include <vector>

int compute_693() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
