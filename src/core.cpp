// Auto-generated module | 2026-05-11T19:37:51.703987
#include <iostream>
#include <vector>

int compute_824() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
