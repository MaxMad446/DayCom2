// Auto-generated module | 2026-05-12T21:18:16.046979
#include <iostream>
#include <vector>

int compute_808() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
