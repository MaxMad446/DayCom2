// Auto-generated module | 2026-05-12T20:43:14.466812
#include <iostream>
#include <vector>

int compute_586() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
