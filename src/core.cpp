// Auto-generated module | 2026-05-12T20:44:20.637701
#include <iostream>
#include <vector>

int compute_937() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
