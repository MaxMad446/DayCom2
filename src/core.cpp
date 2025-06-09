// Auto-generated module | 2026-05-12T04:13:38.238891
#include <iostream>
#include <vector>

int compute_336() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
