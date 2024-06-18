// Auto-generated module | 2026-05-11T22:42:45.881155
#include <iostream>
#include <vector>

int compute_880() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
