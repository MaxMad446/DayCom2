// Auto-generated module | 2026-05-12T21:36:20.706781
#include <iostream>
#include <vector>

int compute_323() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
