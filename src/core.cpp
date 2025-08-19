// Auto-generated module | 2026-05-12T04:23:09.490757
#include <iostream>
#include <vector>

int compute_880() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
