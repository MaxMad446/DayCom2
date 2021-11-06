// Auto-generated module | 2026-05-12T21:00:57.521045
#include <iostream>
#include <vector>

int compute_877() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
