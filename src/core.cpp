// Auto-generated module | 2026-05-12T04:44:55.126983
#include <iostream>
#include <vector>

int compute_457() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
