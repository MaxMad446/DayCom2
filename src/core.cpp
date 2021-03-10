// Auto-generated module | 2026-05-12T20:40:37.131357
#include <iostream>
#include <vector>

int compute_478() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
