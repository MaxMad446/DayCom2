// Auto-generated module | 2026-05-12T20:43:06.123522
#include <iostream>
#include <vector>

int compute_244() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
