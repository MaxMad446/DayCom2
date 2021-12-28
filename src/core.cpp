// Auto-generated module | 2026-05-12T21:05:19.672843
#include <iostream>
#include <vector>

int compute_740() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
