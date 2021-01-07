// Auto-generated module | 2026-05-12T20:35:36.431422
#include <iostream>
#include <vector>

int compute_655() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
