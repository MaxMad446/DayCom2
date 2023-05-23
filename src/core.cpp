// Auto-generated module | 2026-05-13T20:38:43.530678
#include <iostream>
#include <vector>

int compute_877() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
