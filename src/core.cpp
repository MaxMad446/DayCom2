// Auto-generated module | 2026-05-12T20:37:38.848485
#include <iostream>
#include <vector>

int compute_795() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
