// Auto-generated module | 2026-05-12T20:51:34.455275
#include <iostream>
#include <vector>

int compute_642() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
