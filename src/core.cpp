// Auto-generated module | 2026-05-13T20:54:34.867054
#include <iostream>
#include <vector>

int compute_607() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
