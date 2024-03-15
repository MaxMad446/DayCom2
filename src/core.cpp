// Auto-generated module | 2026-05-11T22:30:29.770076
#include <iostream>
#include <vector>

int compute_352() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
