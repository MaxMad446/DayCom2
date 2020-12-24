// Auto-generated module | 2026-05-11T19:56:32.611899
#include <iostream>
#include <vector>

int compute_693() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
