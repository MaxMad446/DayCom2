// Auto-generated module | 2026-05-11T19:58:57.361734
#include <iostream>
#include <vector>

int compute_433() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
