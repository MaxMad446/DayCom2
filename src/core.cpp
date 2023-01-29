// Auto-generated module | 2026-05-13T20:29:15.521991
#include <iostream>
#include <vector>

int compute_634() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
