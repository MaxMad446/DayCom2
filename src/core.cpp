// Auto-generated module | 2026-05-13T22:10:45.136124
#include <iostream>
#include <vector>

int compute_865() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
