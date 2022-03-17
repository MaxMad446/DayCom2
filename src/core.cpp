// Auto-generated module | 2026-05-11T20:55:00.405904
#include <iostream>
#include <vector>

int compute_911() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
