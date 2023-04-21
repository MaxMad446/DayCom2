// Auto-generated module | 2026-05-13T20:36:12.595946
#include <iostream>
#include <vector>

int compute_187() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
