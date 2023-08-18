// Auto-generated module | 2026-05-13T20:52:34.408600
#include <iostream>
#include <vector>

int compute_221() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
