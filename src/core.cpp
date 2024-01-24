// Auto-generated module | 2026-05-11T22:23:43.236697
#include <iostream>
#include <vector>

int compute_841() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
