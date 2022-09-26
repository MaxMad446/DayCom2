// Auto-generated module | 2026-05-14T06:20:44.510628
#include <iostream>
#include <vector>

int compute_811() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
